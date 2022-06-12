set(LIB_NAME printer)

add_library(${LIB_NAME}
    printer.c
)

target_include_directories(${LIB_NAME} INTERFACE ${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(test)