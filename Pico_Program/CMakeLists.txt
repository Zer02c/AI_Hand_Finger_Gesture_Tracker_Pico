cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(myproject_test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blue
	main.c++
	)

target_link_libraries(blue pico_stdlib)

pico_enable_stdio_usb(blue 1)
pico_enable_stdio_uart(blue 1)

pico_add_extra_outputs(blue)