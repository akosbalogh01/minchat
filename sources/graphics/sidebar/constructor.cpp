#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"

chat::graphics::sidebar::sidebar(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
    var_active = false;
    var_slider_width = 0;

    update();
    var_background.setFillColor(sf::Color::Cyan);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);

    var_background_slider.setFillColor(sf::Color::Cyan);
    var_background_slider.setOutlineThickness(2);
    var_background_slider.setOutlineColor(sf::Color::Black);
    var_background_slider.setPosition(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, 0));

    var_background_cover.setFillColor(sf::Color::Black);
    var_background_cover.setOutlineThickness(0);
    var_background_cover.setOutlineColor(sf::Color::Black);
    var_background_cover.setPosition(sf::Vector2f(0, 0));
}
