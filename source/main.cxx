#include <GLFW/glfw3.h>

int main()
{
    glfwInit();
    auto window = glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
}
