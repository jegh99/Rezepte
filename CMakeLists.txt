cmake_minimum_required(VERSION 3.15)

project(Rezepte LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

if (CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

file(GLOB_RECURSE REZEPTE_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/sources/*.c"
)

add_executable(Rezepte ${REZEPTE_SOURCES})

target_include_directories(Rezepte PRIVATE
    ${CMAKE_SOURCE_DIR}/sources/general_headers
    ${CMAKE_SOURCE_DIR}/sources/headers
)

set_target_properties(Rezepte PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/executables
)

install(TARGETS Rezepte RUNTIME DESTINATION bin)