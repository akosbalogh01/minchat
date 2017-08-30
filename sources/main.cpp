#include "SFML/Graphics.hpp"
#include "../headers/logic.hpp"
#include "../headers/graphics.hpp"

int main() {
    chat::logic::core program;
    program.loadSettings("release/settings");

    std::shared_ptr <chat::graphics::core> graphics = std::make_shared <chat::graphics::core> ();
    program.setRenderTarget(graphics);

    while (program.isRunning()) {
        program.processEvents();
        graphics.get()->render();
    }

    return 0;
}

//exception handling
