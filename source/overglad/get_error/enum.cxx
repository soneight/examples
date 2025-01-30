#include <header.hxx>
#include <son8/overglad/v1_1.hxx>

int main()
{
    app::Window window;
    window.run([]() {
        gl::begin(static_cast< gl::enums::Draw >(8888888));
        assert(gl::get_error() == gl::enums::Error::Enum);
    });
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
