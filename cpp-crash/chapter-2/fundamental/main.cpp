// Library imports.
#include <cstdio>

// INTEGER TYPES
// These store whole numbers.
// Short/[Normal:Int]/Long/LongLong = 2/4/4/8 Bytes
// [Normal:Signed]/Unsigned = Can be Negative / Cannot be Negative
// A table of these types, their sizes, and their format specifiers is on page 32.
short as = -32768; unsigned short au = 65536;
int bs = -2147483648; unsigned int bu = 4294967296;
long cs = -2147483648; unsigned long cu = 4294967296;
long long ds = -9223372036854776000; unsigned long long du = 18446744073709552000;

// PREFIXES & LITERALS
// These are not types, but are used to write literals.
// Literals are values hardcoded into a program.
// They can be represented with no prefix (in decimal form).
// When prefixed, they can be represented in binary (0b), octal (0), or hex (0x).
unsigned short ed = 12345;
unsigned short eb = 0b011000000111001;
unsigned short eo = 030071;
unsigned short eh = 0x3039;