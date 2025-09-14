from parser import Parser
from templates import *

def to_string(enum_records: list, prefix_size: int) -> str:
  return ENUM_SEPARATOR.join('E' + enum_record[prefix_size:] + ' = ' + enum_record for enum_record in enum_records)

def generate_enum_records_from_extensions(enum_name: str, parser: Parser):
  if enum_name not in parser.enum_records_from_extensions: return ''
  prefix_size = parser.get_enum_record_prefix_size(enum_name)
  enum_out = ''
  for extension_name, enum_records in parser.enum_records_from_extensions[enum_name].items():
    enum_content = to_string(enum_records, prefix_size) + ENUM_SEPARATOR
    if extension_name in parser.protected_extensions:
      enum_out += protection_template.format(parser.protected_extensions[extension_name], enum_content)
    else:
      enum_out += enum_content
  return enum_out

def generate_enum_records_from_features(enum_name: str, parser: Parser):
  if enum_name not in parser.enum_records_from_features: return ''
  prefix_size = parser.get_enum_record_prefix_size(enum_name)
  enum_records = parser.enum_records_from_features[enum_name]
  return to_string(enum_records, prefix_size) + ENUM_SEPARATOR

def generate_enums(parser: Parser):
  enums_out = ''
  for enum_name, enum_records in parser.enums.items():
    prefix_size = parser.get_enum_record_prefix_size(enum_name)
    enum_content = to_string(enum_records, prefix_size) + ENUM_SEPARATOR
    enum_content += generate_enum_records_from_extensions(enum_name, parser)
    enum_content += generate_enum_records_from_features(enum_name, parser)
    type_name = enum_name.removeprefix('Vk')
    type_name = parser.remove_tag(type_name)
    if enum_name in parser.enum_category_enum:
      enum_current = enum_template.format(type_name, enum_content)
    elif enum_name in parser.enum_category_bits:
      type_name = type_name.replace('Flag', 'Mask')
      mask_type = enum_name.replace('FlagBits', 'Flags')
      enum_current = mask_template.format(type_name, mask_type, enum_content)
    else:
      raise ValueError('Unexpected enum')
    
    if enum_name in parser.protected_types:
      protection_name = parser.protected_types[enum_name]
      enum_current = protection_template.format(protection_name, enum_current)
    
    enums_out += enum_current
  return enums_out

def generate_enum_file(parser: Parser):
  enums = generate_enums(parser)
  enums_file_content = file_template.format('WOLF_ENUMS_H', '#include <vulkan/vulkan.h>', 'Wolf', enums)
  with open("enums.h", "w") as f:
    f.write(enums_file_content)
