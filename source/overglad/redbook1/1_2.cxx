#include <header.hxx>
#define SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <son8/overglad/v1_1.hxx>

#include <chrono>
#include <thread>

int main() {
    app::Windowed window{ {
        SON8_OVERGLAD_VERSION,
        app::Config::Height{ 500u },
        app::Config::Width{ 500u }
    } };

    window.run( [ ]( ) {
        glClearColor( 0.f, 0.f, 0.f, 0.f );
        glClear( GL_COLOR_BUFFER_BIT );
        gl::color( 1.f, 1.f, 1.f );
        gl::matrix_mode( gl::enums::MatrixMode::Project );
        gl::load_identity( );
        gl::ortho( -1.0, 1.0, -1.0, 1.0, -1.0, 1.0 );
        gl::begin( gl::enums::Draw::Polygon );
            gl::vertex( -.5f, -.5f );
            gl::vertex( -.5f,  .5f );
            gl::vertex(  .5f,  .5f );
            gl::vertex(  .5f, -.5f );
        gl::end( );
        glFlush( );
        std::this_thread::sleep_for( std::chrono::milliseconds( 10 ) );
    } );


}
