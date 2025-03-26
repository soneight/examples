#include <header.hxx>
#define SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <son8/overglad/v1_1.hxx>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <optional>

static GLfloat spin = 0.0;

void display();
void spinDisplay();

void myInit();
void myReshape( GLsizei w, GLsizei h );

int main()
{
    using OptSpin = std::optional< bool >;
    app::Config config{
        SON8_OVERGLAD_VERSION,
        app::Config::Height{ 500u },app::Config::Width{ 500u }
    };
    app::Windowed window{ config };

    myInit();
    myReshape( config.width(), config.height() );

    glfwSetFramebufferSizeCallback( window, []( GLFWwindow *, int w, int h ) {
        myReshape( w, h );
    } );

    static auto spinning = []( OptSpin set = std::nullopt ) {
        static bool spinning_ = false;
        if ( !set ) return spinning_;
        spinning_ = set.value();
        return spinning_;
    };

    glfwSetMouseButtonCallback( window, []( GLFWwindow *, int button, int action, int ) {
        if ( button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS ) spinning( true );
        if ( button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_PRESS ) spinning( false );
    } );

    window.run( [ ]( ) {
        spinning( ) ? spinDisplay() : display();
    } );
} // main

void display()
{
    gl::clear( gl::enums::Clearbit::Color);

    gl::push_matrix();
        glRotatef(spin, .0f, .0f, 1.f);
        gl::rect(-25.f, -25.f, 25.f, 25.f);
    gl::pop_matrix();

    gl::flush();
}

void spinDisplay() {
    spin += 2.0;
    if (spin > 360.0) spin = 0.0;
    display( );
}

void myInit()
{
    gl::clear_color( );
    gl::color( 1.f, 1.f, 1.f );
    glShadeModel( GL_FLAT );
}

void myReshape( GLsizei w, GLsizei h )
{
    auto divw = h / static_cast< GLfloat >( w );
    auto divh = w / static_cast< GLfloat >( h );
    gl::viewport( 0, 0, w, h );
    gl::matrix_mode( gl::enums::MatrixMode::Project );
    gl::load_identity( );
    (w <= h)
    ? gl::ortho( -50.0, 50.0, -50.0 * divw, 50.0 * divw, -1.0, 1.0 )
    : gl::ortho( -50.0 * divh, 50.0 * divh, -50.0, 50.0, -1.0, 1.0 );
    gl::matrix_mode( gl::enums::MatrixMode::Model );
    gl::load_identity( );
}
