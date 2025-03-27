add_subdirectory( header )
link_libraries( son8::overglad son8::windowed son8::examples-overglad-header )

add_executable( overglad-get_error-none get_error/none.cxx )
add_executable( overglad-get_error-operation get_error/operation.cxx )
add_executable( overglad-get_error-enum get_error/enum.cxx )

link_libraries( glfw )
add_executable( overglad-redbook-1_1 redbook1/1_1.cxx )
add_executable( overglad-redbook-1_2 redbook1/1_2.cxx )
add_executable( overglad-redbook-1_3 redbook1/1_3.cxx )
add_executable( overglad-redbook-1_4 redbook1/1_4.cxx )
