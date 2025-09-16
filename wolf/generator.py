from parser import Parser
from templates import *

def to_string(enum_records: list, prefix_size: int) -> str:
  return ENUM_SEPARATOR.join('E' + enum_record[prefix_size:] + ' = ' + enum_record for enum_record in enum_records)

def protect(content: str, protection: str | None) -> str:  
  return protection_template.format(protection, content) if protection else content

def generate_enum_records_from_extensions(enum_name: str, parser: Parser):
  if enum_name not in parser.enum_records_from_extensions: return ''
  prefix_size = parser.get_enum_record_prefix_size(enum_name)
  enum_out = ''
  for extension_name, enum_records in parser.enum_records_from_extensions[enum_name].items():
    enum_content = to_string(enum_records, prefix_size) + ENUM_SEPARATOR
    enum_out += protect(enum_content, parser.protected_extensions.get(extension_name))
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
    enum_content = to_string(enum_records, prefix_size) + (ENUM_SEPARATOR if enum_records else '') 
    enum_content += generate_enum_records_from_extensions(enum_name, parser)
    enum_content += generate_enum_records_from_features(enum_name, parser)
    type_name = enum_name.removeprefix('Vk')
    type_name = parser.remove_tag(type_name)
    if enum_name in parser.enum_category_enum:
      enum_current = enum_template.format(type_name, enum_content)
    elif enum_name in parser.enum_category_bits:
      type_name = type_name.replace('Flag', 'Mask')
      mask_type = enum_name.replace('FlagBits', 'Flags')
      enum_current = enum_mask_template.format(type_name, mask_type, enum_content)
    else:
      raise ValueError(f'Unexpected enum: {enum_name}')
    
    enums_out += protect(enum_current, parser.protected_types.get(enum_name))

  return enums_out

def generate_enum_file(parser: Parser):
  enums = generate_enums(parser)
  enums_file_content = file_template.format('WOLF_ENUMS_H', '#include <vulkan/vulkan.h>', 'Wolf', enums)
  with open("enums.h", "w") as f:
    f.write(enums_file_content)

def generate_masks_file(parser: Parser):
  mask_template = 'using {0} = Mask<{1}>'
  masks = []
  for mask, bits in parser.masks.items():
    mask_name = parser.remove_tag(mask.removeprefix('Vk').replace('Flags', 'Mask'))
    bits_name = parser.remove_tag(bits.removeprefix('Vk').replace('FlagBits', 'MaskBits'))
    masks.append((mask_name, bits_name))
  masks_content = LINE_SEPARATOR.join(mask_template.format(mask, bits) for mask, bits in masks)
  masks_file_content = file_template.format('WOLF_MASKS_H', '#include "mask.h"', 'Wolf', masks_content)
  with open("masks.h", "w") as f:
    f.write(masks_file_content)


def get_member_type(parser: Parser, member):
  generated_type = member.type
  if member.type in parser.masks:
    generated_type = parser.remove_tag(member.type.removeprefix('Vk').replace('Flags', 'Mask'))
  elif member.type in parser.enum_category_enum:
    generated_type = parser.remove_tag(member.type.removeprefix('Vk'))
  elif member.type in parser.enum_category_bits:
    generated_type = parser.remove_tag(member.type.removeprefix('Vk').replace('Flag', 'Mask'))
  elif member.type in parser.structure_category:
    generated_type = member.type.removeprefix('Vk')
  return generated_type

def generate_structures(parser: Parser):
  structures = ''
  for structure in parser.structures:
    structure_name = structure.name.removeprefix('Vk')
    structure_members = []
    for member in structure.members:
      generated_type = get_member_type(parser, member)
      structure_members.append(member.signature.replace(member.type, generated_type))
    structure_content = LINE_SEPARATOR.join(structure_members) + LINE_SEPARATOR
    structure_current = structure_template.format(structure_name, structure_content)
    structures += structure_current
  return structures

def generate_structure_file(parser: Parser):
  structures = generate_structures(parser)
  structure_file_content = file_template.format('WOLF_STRUCTURES_H', '#include "enums.h"', 'Wolf', structures)
  with open("structures.h", "w") as f:
    f.write(structure_file_content)