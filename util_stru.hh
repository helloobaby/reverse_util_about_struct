#include<cstddef>

#define STR_MERGE_IMPL(a, b) a##b
#define STR_MERGE(a, b) STR_MERGE_IMPL(a, b)
#define make_offset(offset) std::byte STR_MERGE(pad,__COUNTER__)[offset]
