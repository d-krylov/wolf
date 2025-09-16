ENUM_SEPARATOR = ',\n'
LINE_SEPARATOR = ';\n'

enum_template = """
enum class {0} {{
{1}
}};
"""

enum_mask_template = """
enum class {0} : {1} {{
{2}
}};
"""

protection_template = """
#ifdef {0}
{1}
#endif // {0}
"""

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

structure_template = """
struct {0} {{
{1}
}};
"""