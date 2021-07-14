set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories(${lib-LR35902_SOURCE_DIR}/include)
add_library(lib-LR35902 CPU_LR35902.c)