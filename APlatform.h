#pragma once

#include <cstdint>

typedef int8_t      i8;
typedef int16_t     i16;
typedef int32_t     i32;
typedef int64_t     i64;
typedef uint8_t     u8;
typedef uint16_t    u16;
typedef uint32_t    u32;
typedef uint64_t    u64;
typedef char        char8;
typedef char16_t    char16;
typedef char32_t    char32;
typedef wchar_t     wchar;

#define ANONYMOUS_DETAIL_HEADER(prefix)

#define ANONYMOUS_NAMESPACE_BEGIN   namespace Anonymous {
#define ANONYMOUS_NAMESPACE_END     }