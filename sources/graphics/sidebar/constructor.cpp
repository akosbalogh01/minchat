#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"

chat::graphics::sidebar::sidebar(const std::shared_ptr <sf::RenderWindow>& param): var_buttons(param) {
    var_rendertarget = param;
    var_active = false;
    var_slider_width = 0;

    update();
    var_background[MAIN].setFillColor(sf::Color::Cyan);
    var_background[MAIN].setOutlineThickness(2);
    var_background[MAIN].setOutlineColor(sf::Color::Black);

    var_background[SLIDER].setFillColor(sf::Color::Cyan);
    var_background[SLIDER].setOutlineThickness(2);
    var_background[SLIDER].setOutlineColor(sf::Color::Black);
    var_background[SLIDER].setPosition(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, 0));

    var_background[COVER].setFillColor(sf::Color::Black);
    var_background[COVER].setOutlineThickness(0);
    var_background[COVER].setOutlineColor(sf::Color::Black);
    var_background[COVER].setPosition(sf::Vector2f(0, 0));
}
