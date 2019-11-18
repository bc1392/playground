// Library imports.
#include <cstdio>

// Main function.
int main() {

    // INTEGER TYPES
    // These store whole numbers.
    // Short/[Normal:Int]/Long/LongLong = 2/4/4/8 Bytes
    // [Normal:Signed]/Unsigned = Can be Negative / Cannot be Negative
    // A table of these types, their sizes, and their format specifiers is in "table.md".
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
    printf("")

    // FLOATING POINTS
    // Float / Double / Long Double = Single / Double / Extended (Percision)
    // Single percision suffixed with f/F, while extended is suffixed with l/L.
    // You can also use scientific notation in literals.
    float fs = 0.1F;
    double fd = 0.2;
    long double fld = 0.3L;
    double plancks_constant = 6.62607004e-34;
    printf("Plancks Constant is %e (%f).", plancks_constant, plancks_constant);

}