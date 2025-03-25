#include <header.hxx>
#define SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <son8/overglad/v1_1.hxx>

int main( )
{
    app::Config config{ SON8_OVERGLAD_VERSION, app::Config::Height{ 640u } } ;
    app::Windowed window{ config };

    window.run( [ ]( ) {
        glClearColor( 0.f, 0.f, 0.f, 0.f );
        glClear( GL_COLOR_BUFFER_BIT );
        gl::color( 1.f, 1.f, 1.f ); // glColor3f(1.f, 1.f, 1.f);
        glOrtho( -1.0, 1.0,-1.0, 1.0,-1.0, 1.0 );
        gl::begin( gl::enums::Draw::Polygon ); // glBegin( GL_POLYGON );
            gl::vertex( -.5f, -.5f ); // glVertex2f( -.5f, -.5f );
            gl::vertex( -.5f,  .5f ); // glVertex2f( -.5f,  .5f );
            gl::vertex(  .5f,  .5f ); // glVertex2f(  .5f,  .5f );
            gl::vertex(  .5f, -.5f ); // glVertex2f(  .5f, -.5f );
        gl::end( ); // glEnd();
        glFlush( );
    } );
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
