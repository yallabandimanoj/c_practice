SUMMARY = "Simple Hello World C program using CMake"
LICENSE = "CLOSED"
SRC_URI = "file://CMakeLists.txt \
           file://hello.c"

S = "${WORKDIR}"
inherit cmake

