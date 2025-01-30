FetchContent_Declare(
    son8overglad
    GIT_REPOSITORY https://github.com/soneight/overglad.git
    GIT_TAG        634e8ada35d2a45e2a7f377d1918ed536410b3fb
)

FetchContent_MakeAvailable(son8overglad)

add_subdirectory(window)
link_libraries(son8::overglad-window)
add_executable(overglad-get_error-none get_error/none.cxx)
