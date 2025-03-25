set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

FetchContent_Declare(
    son8__overglad
    GIT_REPOSITORY https://github.com/son8fork/overglad-beta.git
    GIT_TAG        beta-1
)
FetchContent_MakeAvailable( son8__overglad )

FetchContent_Declare(
    son8__windowed
    GIT_REPOSITORY https://github.com/son8fork/windowed.git
    GIT_TAG        minor-1
)
FetchContent_MakeAvailable( son8__windowed )

if( MSVC )
    message( STATUS "${SON8PROJ}: Its MSVC add W4 compile options " )
    add_compile_options( /W4 )
else( )
    message ( STATUS "${SON8PROJ}: Not MSVC, add Wall, Wextra compile options" )
    add_compile_options( -Wall -Wextra )
endif( )

add_subdirectory( overglad )
