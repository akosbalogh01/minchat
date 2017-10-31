#include "SFML/Graphics.hpp"
#include <memory>
#include "logic.hpp"
#include "graphics.hpp"

sf::Vector2i chat::graphics::core::mousePosition = sf::Vector2i(0, 0);

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
