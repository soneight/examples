FetchContent_Declare(
    son8__overglad
    GIT_REPOSITORY https://github.com/son8fork/overglad-beta.git
    GIT_TAG        beta
)
FetchContent_MakeAvailable(son8__overglad)

add_subdirectory(window)
link_libraries(son8::overglad-window)
add_executable(overglad-get_error-none get_error/none.cxx)
add_executable(overglad-get_error-operation get_error/operation.cxx)
add_executable(overglad-get_error-enum get_error/enum.cxx)

add_executable( overglad-redbook-1_1 redbook1/1_1.cxx )
