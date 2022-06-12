#include <stdio.h>
#include <string.h>

#include "version.h"
#include "printer.h"

void print_version();

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        if (strcmp(argv[1], "-v") == 0)
        {
            print_version();
            return 0;
        }
        else
        {
            if (strcmp(argv[1], "-h") != 0)
            {
                printf("Argument not recognized. Help:");
            }
            print_usage();
            return 0;
        }
    }
    print_all_limits();
}

void print_version()
{
    printf("v%u.%u.%u\n", limits_printer_VERSION_MAJOR, limits_printer_VERSION_MAJOR, limits_printer_VERSION_PATCH);
}

