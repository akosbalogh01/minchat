#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/interfaces.hpp"
#include "../headers/textarea.hpp"

static const unsigned int distance_from_top     = 15;
static const unsigned int distance_from_left    = 65;
static const unsigned int distance_from_bottom  = 80;
static const unsigned int distance_from_right   = 15;

chat::graphics::textarea::textarea(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

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
    var_background.setPosition(sf::Vector2f(distance_from_left, distance_from_top));
    sf::Vector2f size(window_size.x - distance_from_left - distance_from_right, window_size.y - distance_from_top - distance_from_bottom);
    var_background.setSize(size);
}
