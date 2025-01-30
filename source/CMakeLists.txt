set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/son8fork/glfw.git
    GIT_TAG        9bfd5e25bf8b696e8119583752f657d111c8be47
)
FetchContent_MakeAvailable(glfw)

add_subdirectory(overglad)
