#include <Window.hxx>
#include <son8/overglad/v1_1.hxx>

#include <cassert>

namespace app = son8::examples::overglad;
namespace gl = son8::overglad;

int main()
{
    app::Window window;
    window.run([]() {
        assert(gl::get_error() == gl::enums::Error::No);
    });
}
