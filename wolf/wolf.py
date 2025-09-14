#!/usr/bin/env python3

import argparse
from parser import Parser
from generator import generate_enum_file, generate_masks_file


def parse_arguments():
  parser = argparse.ArgumentParser(description='Wolf command line parser')
  parser.add_argument("input", help="Path to vk.xml")
  parser.add_argument('-pe', '--penums', action='store_false', help="Generate protected enums") 
  parser.add_argument('-ae', '--aenums', action='store_false', help="Generate aliased enums") 
  arguments = parser.parse_args()
  return arguments

if __name__ == "__main__":
  
  arguments = parse_arguments()

  parser = Parser(arguments.input)

  generate_enum_file(parser)
  generate_masks_file(parser)





