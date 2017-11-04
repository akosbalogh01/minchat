#include <iostream>
#include "SFML/Graphics.hpp"
#include "sidebar/core.hpp"
#include "constants.hpp"

const bool chat::graphics::sidebar::core::interpret(const sf::Event& event) {
    if (event.type == sf::Event::MouseButtonReleased && (unsigned) event.mouseButton.x < chat::graphics::size::sidebar::width) {
        return true;
    }

    return false;
}

void chat::graphics::sidebar::core::execute() {
    std::cout << "[LOG] Trigger: sidebar" << std::endl;
    var_slider.toggle();
}
