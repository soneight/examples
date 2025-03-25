#include <header.hxx>
#define SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <son8/overglad/v1_1.hxx>

static GLfloat spin = 0.0;

void display();
void spinDisplay();

int main()
{
    app::Config config{
        SON8_OVERGLAD_VERSION,
        app::Config::Height{ 500u },app::Config::Width{ 500u }
    };
    app::Windowed window{ config };

    glClearColor( 0.0, 0.0, 0.0, 1.0) ;
    glColor3f( 1.0, 1.0, 1.0 );
    glShadeModel( GL_FLAT );

    glViewport( 0, 0, config.width(), config.height() );
    gl::matrix_mode( gl::enums::MatrixMode::Project );
    gl::load_identity( );
    gl::ortho( -50.0, 50.0, -50.0, 50.0, -1.0, 1.0 );
    gl::matrix_mode( gl::enums::MatrixMode::Model );
    gl::load_identity( );

    window.run( spinDisplay );
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
        glRotatef(spin, .0f, .0f, 1.f);
        glRectf(-25.f, -25.f, 25.f, 25.f);
    glPopMatrix();

    glFlush();
}

void spinDisplay() {
    spin += 2.0;
    if (spin > 360.0) spin = 0.0;
    display();
}
