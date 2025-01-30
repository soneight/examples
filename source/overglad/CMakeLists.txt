FetchContent_Declare(
    son8overglad
    GIT_REPOSITORY https://github.com/soneight/overglad.git
    GIT_TAG        069ec4a9a4191340d1c06c3f06f226d7b35d9e49
)

FetchContent_MakeAvailable(son8overglad)

add_subdirectory(window)
link_libraries(son8::overglad-window)
add_executable(overglad-get_error-none get_error/none.cxx)
add_executable(overglad-get_error-operation get_error/operation.cxx)
add_executable(overglad-get_error-enum get_error/enum.cxx)
