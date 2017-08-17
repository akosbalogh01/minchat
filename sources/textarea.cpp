#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/interfaces.hpp"
#include "../headers/textarea.hpp"
#include "../headers/constants.hpp"

chat::graphics::textarea::textarea(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
    var_textvector.clear();

    update();
    var_background.setFillColor(sf::Color::Magenta);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}

void chat::graphics::textarea::render() {
    var_rendertarget.get()->draw(var_background);
}

void chat::graphics::textarea::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(graphics::distance::textarea::left, graphics::distance::textarea::top));
    sf::Vector2f size(window_size.x - graphics::distance::textarea::left - graphics::distance::textarea::right, window_size.y - graphics::distance::textarea::top - graphics::distance::textarea::bottom);
    var_background.setSize(size);
}
