ENUM_SEPARATOR = ',\n'
LINE_SEPARATOR = ';\n'

structure_type_template = 'static constexpr StructureType structure_type = StructureType::E{0};'

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

# HEADER TEMPLATE
header_template = """
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

# CPP TEMPLATE
cpp_template = """
// included
{0}

namespace {1} {{

// content
{2}

}} // end namespace {1}
"""

# STRUCTURE TEMPLATE
structure_template = """
struct {0} {{
{3}
{2}

{1}
}};
"""

# CAST TEMPLATE
methods_template = """
{0}::operator const Vk{0} &() const noexcept {{
  return *reinterpret_cast<const Vk{0} *>(this);
}}

{0}::operator Vk{0} &() noexcept {{
  return *reinterpret_cast<Vk{0} *>(this);
}}

{0}::operator const Vk{0} *() const noexcept {{
  return reinterpret_cast<const Vk{0} *>(this);
}}

{0}::operator Vk{0} *() noexcept {{
  return reinterpret_cast<Vk{0} *>(this);
}}
"""

# METHOD DECLARATION TEMPLATE
method_declarations_template = """
using NativeType = Vk{0};

auto operator<=>(const {0} &other) const = default;

operator const NativeType &() const noexcept;
operator NativeType &() noexcept;
operator const NativeType *() const noexcept;
operator NativeType *() noexcept;
"""