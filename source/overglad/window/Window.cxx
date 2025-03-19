#include <Window.hxx>
#include <glad/gl.h>

namespace son8::examples::overglad {
    Window::Window()
    {
        glfwInit();
        window = glfwCreateWindow(640, 480, "son8::examples::overglad::Window", nullptr, nullptr);
        glfwMakeContextCurrent(window);
        gladLoadGL(glfwGetProcAddress);
        glfwSwapInterval(1);
    }
    Window::~Window()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
