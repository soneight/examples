set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

FetchContent_Declare(
    son8__overglad
    GIT_REPOSITORY https://github.com/son8fork/overglad-beta.git
    GIT_TAG        beta
)
FetchContent_MakeAvailable( son8__overglad )

FetchContent_Declare(
    son8__windowed
    GIT_REPOSITORY https://github.com/son8fork/windowed.git
    GIT_TAG        minor-1
)
FetchContent_MakeAvailable( son8__windowed )

add_subdirectory( overglad )
