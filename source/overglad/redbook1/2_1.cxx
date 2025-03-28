#include <header.hxx>
#define SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <son8/overglad/v1_1.hxx>

struct Line {
    float x1, y1, x2, y2;
};

void drawOneLine( Line line );
void myInit();
void display();

int main()
{
    app::Windowed window( {
        app::Config::Version{ app::OpenGL::Vx010100 },
        app::Config::Height{ 150u },app::Config::Width{ 400u }
    } );

    myInit( );
    window.run( display );
}

void drawOneLine( Line line ) {
    gl::begin( gle::Draw::Lines_S );
        gl::vertex( line.x1, line.y1);
        gl::vertex( line.x2, line.y2);
    gl::end();
}

void myInit() {
    gl::viewport( 0, 0, 400, 150 );

    gl::ortho( 0.0, 400.0, 0.0, 150.0, -1.0, 1.0 );

    gl::clear_color( );
    glShadeModel( GL_FLAT );
}

void display()
{
    gl::clear( gle::Clearbit::Color );
    gl::color( 1.0, 1.0, 1.0 );
    glEnable( GL_LINE_STIPPLE );
    // 1st row, 3 different stipple lines
    gl::line_stipple( 1, 0x0101 );
    drawOneLine( { 50.f, 125.f, 150.f, 125.f } );
    gl::line_stipple( 1, 0x00FF );
    drawOneLine( { 150.f, 125.f, 250.f, 125.f } );
    gl::line_stipple( 1, 0x1C47 );
    drawOneLine( { 250.f, 125.f, 350.f, 125.f } );
    // 2nd row, 3 different stipple wide lines
    gl::line_width( 5.f );
    gl::line_stipple(1, 0x0101);
    drawOneLine( { 50.f, 100.f, 150.f, 100.f } );
    gl::line_stipple( 1, 0x00FF );
    drawOneLine( { 150.f, 100.f, 250.f, 100.f } );
    gl::line_stipple( 1, 0x1C47 );
    drawOneLine( { 250.f, 100.f, 350.f, 100.f } );
    gl::line_width( 1.f );
    // 3rd row, 6 lines, with dash/dot/dash stipple
    gl::line_stipple( 1, 0x1C47 );
    gl::begin( gle::Draw::Lines_S );
    for ( int i = 0; i < 7; ++i ) {
        gl::vertex( 50.f + i * 50.f, 75.f );
    }
    gl::end( );
    // 4th row, 6 indepentent lines with dash/dot/dash stipple
    for ( int i = 0; i < 6; ++i ) {
        drawOneLine( { 50.f + i * 50.f, 50.f, 50.f + (i + 1) * 50.f, 50.f } );
    }
    // 5th row, 1 line with dash/dot/dash stipple
    gl::line_stipple( 5, 0x1C47 );
    drawOneLine( { 50.f, 25.f, 350.f, 25.f } );
    gl::flush();
}
