add_subdirectory(printer)

set(EXECUTABLE_NAME limits_printer)

set(${EXECUTABLE_NAME}_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(${EXECUTABLE_NAME}_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(${EXECUTABLE_NAME}_VERSION_PATCH ${PROJECT_VERSION_PATCH})

configure_file(${CMAKE_CURRENT_LIST_DIR}/version.h.in ${CMAKE_CURRENT_LIST_DIR}/version.h @ONLY)
add_executable(${EXECUTABLE_NAME} main.c)
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(${EXECUTABLE_NAME} printer)
