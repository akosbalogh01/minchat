#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "graphics.hpp"
#include "sidebar.hpp"

void chat::graphics::sidebar::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::sidebar::left, chat::graphics::distance::sidebar::top));
    var_background.setSize(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, window_size.y));
    var_background_cover.setSize(sf::Vector2f(window_size.x, window_size.y));
    var_background_slider.setSize(sf::Vector2f(var_slider_width, window_size.y));
}