#include "SFML/Graphics.hpp"
#include "sidebar.hpp"
#include "constants.hpp"

const bool chat::graphics::sidebar::interpret(const sf::Event& event) const {
    if (event.type == sf::Event::MouseButtonReleased && (unsigned) event.mouseButton.x < chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea) {
        return true;
    }

    return false;
}

void chat::graphics::sidebar::trigger() {
    var_active = !var_active;
}
