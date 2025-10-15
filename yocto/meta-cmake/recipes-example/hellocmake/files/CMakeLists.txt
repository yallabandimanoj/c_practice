cmake_minimum_required(VERSION 3.10)
project(hellocmake C)

add_executable(hellocmake hello.c)
install(TARGETS hellocmake DESTINATION bin)

