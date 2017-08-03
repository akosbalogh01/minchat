#include <memory>
#include <string>
#include "../headers/textbox.hpp"

chat::graphics::textbox::textbox(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
    
    update();
    var_background.setFillColor(sf::Color::Blue);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}

void chat::graphics::textbox::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(65, window_size.y - 65));
    var_background.setSize(sf::Vector2f(window_size.x - 80, 50));
}

void chat::graphics::textbox::render() {
    var_rendertarget.get()->draw(var_background);
}

