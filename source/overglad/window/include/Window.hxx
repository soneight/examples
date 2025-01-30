#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

namespace son8::examples::overglad {
    class Window final {
        GLFWwindow *window;
    public:
        Window();
        ~Window();

        operator GLFWwindow *() const noexcept { return window; }

        template< typename Callback >
        void run(Callback &&callback) {
            while (!glfwWindowShouldClose(window))
            {
                glClear(GL_COLOR_BUFFER_BIT);
                glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
                callback();
                glfwSwapBuffers(window);
                glfwPollEvents();
            }
        }
    };
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
