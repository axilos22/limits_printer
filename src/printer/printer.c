#include <stdio.h>
#ifndef _LIMITS_H
#include <limits.h>
#endif
#ifndef _FLOAT_H___
#include <float.h>
#endif

#include "printer.h"

const int field_width = 30;
const int field_number = 3;
const char separator = '-';

// Private functions
void print_int_boundaries(const char *type, const long long int lower_bound, const long long int upper_bound)
{
    printf("%*s | %*lli | %*lli \n", field_width, type, field_width, lower_bound, field_width, upper_bound);
}

void print_unsigned_int_boudaries(const char *type, const unsigned long long int upper_bound)
{
    printf("%*s | %*llu | %*llu \n", field_width, type, field_width, 0ull, field_width, upper_bound);
}

void print_float_boundaries(const char *type, const double lower_bound, const double upper_bound)
{
    printf("%*s | %*Le | %*Le \n", field_width, type, field_width, lower_bound, field_width, upper_bound);
}

void print_long_double_boundaries(const char *type, const long double lower_bound, const long double upper_bound)
{
    printf("%*s | %*Le | %*Le \n", field_width, type, field_width, lower_bound, field_width, upper_bound);
}

void print_separator_line()
{
    for (int rank = 0; rank < field_number * field_width; rank++)
    {
        printf("%c", separator);
    }
    printf("\n");
}

void print_header()
{
    printf("%*s | %*s |%*s \n", field_width, "Type name", field_width, "Lower bound", field_width, "Upper bound");
}

// Public functions
void print_usage()
{
    printf("%s :\n", "NAME");
    printf("\t %s\n", "limits_printer");
    printf("%s :\n", "SYNOPSIS");
    printf("\t %s -h\n", "limits_printer");
    printf("\t %s -v\n", "limits_printer");
    printf("\t %s -t [test sequence]\n", "limits_printer");
    printf("%s :\n", "DESCRIPTION");
    printf("\t %s\n", "limits_printer provides most of the upper and lower bounds of usual C data types.");
    printf("\t %s\n", "Note that all these variables are extracted from <limits.h>");
    printf("\t %s\n", "To locate the currently used limit.h: g++ -H <executable>. With MSVC, activate the /showInclude option");
    printf("\t %s\n", "It is important that you recompile this small code into your system to have your exact boundaries");
    printf("%s :\n", "OPTIONS");
    printf("\t %s\n", "h : Display the present help");
    printf("\t %s\n", "v : Show the program version");
    printf("\t %s\n", "t : Runs the test sequence");
}

void print_integer_limits()
{
    printf("Integer types\n");
    print_int_boundaries("SIGNED CHAR", SCHAR_MIN, SCHAR_MAX);
    print_unsigned_int_boudaries("UNSIGNED CHAR", UCHAR_MAX);
    print_separator_line();
    print_int_boundaries("SIGNED SHORT", SHRT_MIN, SHRT_MAX);
    print_unsigned_int_boudaries("UNSIGNED SHORT", USHRT_MAX);
    print_separator_line();
    print_int_boundaries("SIGNED INTEGER", INT_MIN, INT_MAX);
    print_unsigned_int_boudaries("UNSIGNED INTEGER", UINT_MAX);
    print_separator_line();
    print_int_boundaries("SIGNED LONG", LONG_MIN, LONG_MAX);
    print_unsigned_int_boudaries("UNSIGNED LONG", ULONG_MAX);
    print_separator_line();
    print_int_boundaries("SIGNED LONG LONG", LLONG_MIN, LLONG_MAX);
    print_unsigned_int_boudaries("UNSIGNED LONG LONG", ULLONG_MAX);
    print_separator_line();
}

void print_float_limits()
{
    printf("Floating point types\n");
    print_float_boundaries("FLOAT", FLT_MIN, FLT_MAX);
    print_float_boundaries("DOUBLE", DBL_MIN, DBL_MAX);
    // WARNING: long double printing seems broken on some compilers
    print_long_double_boundaries("LONG DOUBLE", LDBL_MIN, LDBL_MAX);
    print_separator_line();
}

void print_all_limits()
{
    print_header();
    print_integer_limits();
    print_float_limits();
}
