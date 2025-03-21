set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

FetchContent_Declare(
    son8__windowed
    GIT_REPOSITORY https://github.com/son8fork/windowed.git
    GIT_TAG        patch-1
)
FetchContent_MakeAvailable(son8__windowed)

add_subdirectory(overglad)
