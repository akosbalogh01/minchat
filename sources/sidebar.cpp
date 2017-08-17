#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/constants.hpp"
#include "../headers/sidebar.hpp"

chat::graphics::sidebar::sidebar(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    update();
    var_background.setFillColor(sf::Color::Cyan);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}

void chat::graphics::sidebar::render() {
    var_rendertarget.get()->draw(var_background);
}

void chat::graphics::sidebar::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::sidebar::left, chat::graphics::distance::sidebar::top));
    var_background.setSize(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, window_size.y));
}
