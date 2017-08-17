#include <memory>
#include <string>
#include "../headers/textbox.hpp"

const unsigned int distance_from_left       = 65;
const unsigned int distance_from_right      = 15;
const unsigned int distance_from_bottom     = 15;
const unsigned int size_height              = 50;
const unsigned int size_width_from_window   = 80;

chat::graphics::textbox::textbox(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    update();
    var_background.setFillColor(sf::Color::Blue);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}

void chat::graphics::textbox::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(distance_from_left, window_size.y - distance_from_bottom - size_height));
    var_background.setSize(sf::Vector2f(window_size.x - size_width_from_window, size_height));
}

void chat::graphics::textbox::render() {
    var_rendertarget.get()->draw(var_background);
}

