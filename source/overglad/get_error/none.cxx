#include <header.hxx>
#include <son8/overglad/v1_1.hxx>

int main()
{
    app::Window window;
    window.run([]() {
        assert(gl::get_error() == gl::enums::Error::No);
    });
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
