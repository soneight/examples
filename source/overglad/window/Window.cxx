#include <Window.hxx>
#include <glad/gl.h>

namespace son8::examples::overglad {
    Window::Window( unsigned w, unsigned h )
    {
        glfwInit( );
        window = glfwCreateWindow( w, h, "son8::examples::overglad::Window", nullptr, nullptr);
        glfwMakeContextCurrent( window );
        gladLoadGL( glfwGetProcAddress );
        glfwSwapInterval( 1 );
    }
    Window::~Window()
    {
        glfwDestroyWindow( window );
        glfwTerminate( );
    }
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
