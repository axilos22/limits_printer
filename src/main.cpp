#include <iostream> // std::cout
#include <iomanip>  // std::setw

#ifndef _LIMITS_H
#include <limits.h>
#endif
#ifndef _FLOAT_H___
#include <float.h>
#endif

const int default_width = 30;
const int field_number = 3;
const char separator = '-';

void print_separator();
void print_int_boundaries(const char *type, const long long lower_bound, const long long upper_bound);
void print_float_boundaries(const char *type, const long double lower_bound, const long double upper_bound);
void print_uboudaries(const char *type, const unsigned long long upper_bound);

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Starting limits_printer..." << endl;
    cout << setw(default_width) << "Type name" << setw(default_width) << "Lower bound" << setw(default_width) << "Upper bound" << endl;


    cout << "Integer types" << endl;
    print_int_boundaries("SIGNED CHAR", SCHAR_MIN, SCHAR_MAX);
    print_uboudaries("UNSIGNED CHAR", UCHAR_MAX);
    print_separator();
    print_int_boundaries("SIGNED INTEGER", INT_MIN, INT_MAX);
    print_uboudaries("UNSIGNED INTEGER", UINT_MAX);
    print_separator();
    print_int_boundaries("SIGNED SHORT", SHRT_MIN, SHRT_MAX);
    print_uboudaries("UNSIGNED SHORT", USHRT_MAX);
    print_separator();
    print_int_boundaries("SIGNED LONG", LONG_MIN, LONG_MAX);
    print_uboudaries("UNSIGNED LONG", ULONG_MAX);
    print_separator();
    print_int_boundaries("SIGNED LONG LONG", LLONG_MIN, LLONG_MAX);
    print_uboudaries("UNSIGNED LONG LONG", ULLONG_MAX);
    print_separator();
    cout << "Floating point types" << endl;
    print_float_boundaries("FLOAT", FLT_MIN, FLT_MAX);
    print_float_boundaries("DOUBLE", DBL_MIN, DBL_MAX);
    print_float_boundaries("LONG DOUBLE", LDBL_MIN, LDBL_MAX);
    print_separator();
}

void print_int_boundaries(const char *type, const long long lower_bound, const long long upper_bound)
{
    cout << setw(default_width) << type << setw(default_width) << lower_bound << setw(default_width) << upper_bound << endl;
}

void print_float_boundaries(const char *type, const long double lower_bound, const long double upper_bound)
{
    cout << setw(default_width) << type << setw(default_width) << lower_bound << setw(default_width) << upper_bound << endl;
}

void print_uboudaries(const char *type, const unsigned long long upper_bound)
{
    cout << setw(default_width) << type << setw(default_width) << 0 << setw(default_width) << upper_bound << endl;
}

void print_separator()
{
    for(int rank=0; rank < field_number * default_width; rank++)
    {
        cout << separator;
    }
    cout << endl;
}