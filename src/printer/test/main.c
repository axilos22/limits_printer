#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "printer.h"

enum TEST_SEQUENCE {
    DEFAULT = 0,
    PRINT_USAGE,
    PRINT_INT,
    PRINT_FLOAT,
    PRINT_ALL,
    UNKNOWN
};

int main(const int argc, const char *argv[])
{
    if(argc > 1) {
        enum TEST_SEQUENCE test_number = atoi(argv[1]);
        switch (test_number)
        {
        case DEFAULT:
            print_usage();
            return 0;
            break;

        case PRINT_USAGE:
            print_usage();
            return 0;
            break;

        case PRINT_INT:
            print_integer_limits();
            return 0;
            break;

        case PRINT_FLOAT:
            print_float_limits();
            return 0;
            break;

        case PRINT_ALL:
            print_all_limits();
            return 0;
            break;
        
        default:
            return -1;
            break;
        }
    }
    else {
        return -1;
    }
}