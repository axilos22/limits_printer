#include <stdio.h>
#include <string.h>

#include "version.h"
#include "printer.h"

void print_version();

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        char* first_argument = argv[1];
        if (strcmp(first_argument, "-t") == 0)
        {
            printf("Empty test sequence !\n");
            return -1;
        }
        else if (strcmp(first_argument, "-v") == 0)
        {
            print_version();
            return 0;
        }
        else
        {
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

int run_test()
{
    return 0;
}
