add_executable(printer_tester main.c)

target_link_libraries(printer_tester printer)

add_test(NAME DEFAULT COMMAND printer_tester 0)
add_test(NAME PRINT_USAGE COMMAND printer_tester 1)
add_test(NAME PRINT_INT COMMAND printer_tester 2)
add_test(NAME PRINT_FLOAT COMMAND printer_tester 3)
add_test(NAME PRINT_ALL COMMAND printer_tester 4)
