#!/usr/bin/env python3

import argparse
from parser import Parser
from templates import *

def generate_enum_records_from_extensions(enum_name: str, parser: Parser):
  enums_from_extensions = parser.enum_records_from_extensions
  if not enum_name in enums_from_extensions:
    return


def generate_enums(parser: Parser):
  enums_out = ''
  for enum_name, enum_records in parser.enums.items():
    prefix_size = parser.get_enum_record_prefix_size(enum_name)
    enum_content = ',\n'.join('E' + enum_record[prefix_size:] + ' = ' + enum_record for enum_record in enum_records)
    if enum_name in parser.enum_category_enum:
      enum_data = parser.enum_category_enum[enum_name]
      enum_current = enum_template.format(enum_data[0].removeprefix('Vk'), enum_content)
    elif enum_name in parser.enum_category_bits:
      mask_data = parser.enum_category_bits[enum_name]
      mask_name = mask_data[0].removeprefix('Vk') + 'MaskBits' + mask_data[1]
      mask_type = enum_name.replace('FlagBits', 'Flags')
      enum_current = mask_template.format(mask_name, mask_type, enum_content)
    else:
      pass

    if enum_name in parser.protected_types:
      protection_name = parser.protected_types[enum_name]
      enum_current = protection_template.format(protection_name, enum_current)
    
    enums_out += enum_current
  return enums_out

file_template = """
#ifndef {0}
#define {0}

// includes
{1}

namespace {2} {{

// content
{3}

}} // end namespace {2}

#endif // {0}
"""

def generate_enum_file(parser: Parser):
  enums = generate_enums(parser)
  enums_file_content = file_template.format('WOLF_ENUMS_H', '#include <vulkan/vulkan.h>', 'Wolf', enums)
  with open("enums.h", "w") as f:
    f.write(enums_file_content)


def parse_arguments():
  parser = argparse.ArgumentParser(description='Wolf command line parser')
  parser.add_argument("input", help="Path to vk.xml")
  arguments = parser.parse_args()
  return arguments

if __name__ == "__main__":
  
  arguments = parse_arguments()

  parser = Parser(arguments.input)

  generate_enum_file(parser)





