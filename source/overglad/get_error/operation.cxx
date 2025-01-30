#include <header.hxx>
#include <son8/overglad/v1_1.hxx>

int main()
{
    app::Window window;
    window.run([]() {
        gl::end();
        assert(gl::get_error() == gl::enums::Error::Operation);
    });
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
