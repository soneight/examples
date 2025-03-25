#include <header.hxx>
#include <son8/overglad/v1_1.hxx>
#include <son8/windowed.hxx>

int main( ) {
    app::Windowed window;
    window.run( [ ]( ) {
        assert( gl::get< gle::Error >() == gle::Error::No );
    } );
}

// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
