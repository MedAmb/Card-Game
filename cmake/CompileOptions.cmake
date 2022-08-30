include_guard(GLOBAL)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(WARNINGS_AS_ERRORS AND (CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX))
    set(WARNING_OPTIONS
        -Werror
        -Wall
        -Wcast-qual
        -Wcast-align
        -Wconversion
        -Wextra
        -Wfloat-equal
        -Winit-self
        -Wnon-virtual-dtor
        -Wnull-dereference
        -Wold-style-cast
        -Woverloaded-virtual
        -Wredundant-decls
        -Wshadow
        -Wvla
        -Wzero-as-null-pointer-constant
        -Wsign-conversion
        -Wsign-promo
        -Wpedantic
        -pedantic-errors
    )
    add_compile_options("$<$<COMPILE_LANGUAGE:CXX>:${WARNING_OPTIONS}>")
endif()

set(CMAKE_C_FLAGS_RELEASE "-O3 -Os -flto -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Os -flto -DNDEBUG")