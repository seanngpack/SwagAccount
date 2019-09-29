cmake_minimum_required(VERSION 3.15.0)
project(C++BankAccount VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

include_directories (include)
file (GLOB SOURCES "src/*.cpp")
add_executable(C++BankAccount ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(source_dir "${PROJECRT_SOURCE_DIR}/src/")
include(CPack)
