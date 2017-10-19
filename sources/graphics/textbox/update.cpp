#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "textbox.hpp"

void chat::graphics::textbox::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    unsigned int height = chat::graphics::distance::textarea::bottom - chat::graphics::distance::textbox::textarea - chat::graphics::distance::textbox::bottom;
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::textbox::left, window_size.y - chat::graphics::distance::textbox::bottom - height));
    var_background.setSize(sf::Vector2f(window_size.x - chat::graphics::distance::textbox::left - chat::graphics::distance::textbox::right, height));
}