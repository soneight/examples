add_subdirectory( header )
link_libraries( son8::overglad son8::windowed son8::examples-overglad-header )

add_executable( overglad-get_error-none get_error/none.cxx )
add_executable( overglad-get_error-operation get_error/operation.cxx )
add_executable( overglad-get_error-enum get_error/enum.cxx )

add_executable( overglad-redbook-1_1 redbook1/1_1.cxx )
