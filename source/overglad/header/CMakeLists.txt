add_library( ${SON8PROJ}-overglad-header INTERFACE )
add_library( son8::examples-overglad-header ALIAS ${SON8PROJ}-overglad-header )
target_include_directories( ${SON8PROJ}-overglad-header INTERFACE include )
target_link_libraries( ${SON8PROJ}-overglad-header INTERFACE son8::windowed )
