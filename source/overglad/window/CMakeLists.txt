add_library(${SON8PROJ}-overglad-window Window.cxx)
add_library(son8::overglad-window ALIAS ${SON8PROJ}-overglad-window)
target_link_libraries(${SON8PROJ}-overglad-window PUBLIC glfw son8::overglad)
target_include_directories(${SON8PROJ}-overglad-window PUBLIC include)
