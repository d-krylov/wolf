import xml.etree.ElementTree as ET
from itertools import pairwise
from collections import defaultdict

def get_prefix_size(name: str) -> int:
  result = 1
  for previous, current in pairwise(name):
    result += current.isupper() and (previous.islower() or previous.isdigit())
    result += current.isdigit() and previous.islower()
    result += 1
  return result

class Parser :

  def __init__(self, input):
    tree = ET.parse(input)
    self.root = tree.getroot()
    self._init()
    self._parse()

  def remove_tag(self, name: str) -> str:
    for tag in self.tag_names:
      if name.endswith(tag):
        return name.removesuffix(tag)
    return name
  
  def is_type_disabled(self, key : str) -> bool:
    return key in self.disabled_types or key in self.vulkansc_types
  
  def get_enum_record_prefix_size(self, enum_name : str):
    if enum_name == 'VkResult':
      return 2
    prefix_name = self.remove_tag(enum_name)
    if enum_name in self.enum_category_enum:
      return get_prefix_size(prefix_name)
    if enum_name in self.enum_category_bits:
      prefix_name = prefix_name.replace('FlagBits', '')
      return get_prefix_size(prefix_name)

  def _init(self):
    self.enum_category_bits = set()
    self.enum_category_enum = set()
    self.protected_extensions = {}
    self.protected_types = {}
    self.masks = {}
    self.enums = defaultdict(list)
    self.enum_records_from_features = defaultdict(list)
    self.enum_records_from_extensions = defaultdict(lambda: defaultdict(list))
    self.enum_record_duplicates = set()

  def _parse(self):
    self._parse_header()
    self._parse_disabled_types()
    self._parse_protected_types()
    self._parse_types()
    self._parse_enums()
    self._parse_enums_from_extensions()
    self._parse_enums_from_features()

  def _parse_header(self):
    self.platforms = { pnode.get('name') : pnode.get('protect') for pnode in self.root.find('platforms') }
    self.tag_names = [ tnode.get('name') for tnode in self.root.find('tags') ]

  def _parse_disabled_types(self):
    self.disabled_types = { dtype.get('name') for dtype in self.root.findall("extensions/extension[@supported='disabled']/require/type") }
    self.vulkansc_types = { stype.get('name') for stype in self.root.findall("extensions/extension[@supported='vulkansc']/require/type") }
    # Add vulkansc types from features
    self.vulkansc_types.update(stype.get('name') for stype in self.root.findall("feature[@api='vulkansc']/require/type"))

  def _parse_protected_types(self):
    for extension_node in self.root.find('extensions'):
      supported = extension_node.get('supported')
      if supported == 'disabled' or 'platform' not in extension_node.attrib:
        continue
      extension_name = extension_node.get('name')
      platforms_name = extension_node.get('platform')
      self.protected_extensions[extension_name] = self.platforms[platforms_name]
      for require_node in  extension_node.findall('require'):
        for type_node in require_node.findall('type'):
          type_name = type_node.get('name')
          self.protected_types[type_name] = self.platforms[platforms_name]

  def _parse_types(self):
    for type_node in self.root.find('types'):
      if type_node.get('alias'):
        continue
      category = type_node.get('category')
      if category == 'bitmask':
        name = type_node.find('name').text
        type = type_node.find('type').text
        self.masks[name] = type_node.get('requires') or type_node.get('bitvalues') or type
      elif category == 'enum':
        name = type_node.get('name')
        target = self.enum_category_bits if 'FlagBits' in name else self.enum_category_enum
        target.add(name)

  def _parse_enums(self):
    for enum_node in self.root.findall('enums'):
      enum_name = enum_node.get('name')
      if enum_node.get('type') == 'constants' or self.is_type_disabled(enum_name):
        continue
      self.enums[enum_name] = []
      for enum_record_node in enum_node.findall('enum'):
        if enum_record_node.attrib.keys() & ('deprecated', 'alias'):
          continue
        record_name = enum_record_node.get('name')
        self.enums[enum_name].append(record_name)

  def _parse_enums_from_features(self):
    for feature_node in self.root.findall('feature'):
      if feature_node.get('api') == 'vulkansc':
        continue
      for require_node in feature_node.findall('require'):
        for enum_node in require_node.findall('enum'):
          if 'extends' not in enum_node.attrib or 'alias' in enum_node.attrib:
            continue
          extend_name = enum_node.get('extends')
          record_name = enum_node.get('name')
          if record_name not in self.enum_record_duplicates:
            self.enums[extend_name].append(record_name)
            self.enum_record_duplicates.add(record_name)
    
  def _parse_enums_from_extensions(self):
    for extension_node in self.root.find('extensions'):
      supported = extension_node.get('supported')
      if supported == 'disabled' or supported == 'vulkansc':
        continue
      extension_name = extension_node.get('name')
      for require_node in extension_node.findall('require'):
        for enum_record_node in require_node.findall('enum'):
          extend_name = enum_record_node.get('extends')
          if 'alias' in enum_record_node.attrib or extend_name is None or self.is_type_disabled(extend_name): continue
          if enum_record_node.get('api', 'vulkan') != 'vulkan': continue
          record_name = enum_record_node.get('name')
          if record_name not in self.enum_record_duplicates:
            self.enum_records_from_extensions[extend_name][extension_name].append(record_name)
            self.enum_record_duplicates.add(record_name)








