enum_template = """
enum class {0} {{
  {1}
}}; 
"""

mask_template = """
enum class {0} : {1} {{
  {2}
}}; 
"""

protection_template = """
#ifdef {0}
{1} 
#endif // {0}
"""