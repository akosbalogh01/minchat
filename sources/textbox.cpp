#include <memory>
#include <string>
#include "../headers/constants.hpp"
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
    unsigned int height = chat::graphics::distance::textarea::bottom - chat::graphics::distance::textbox::textarea - chat::graphics::distance::textbox::bottom;
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::textbox::left, window_size.y - chat::graphics::distance::textbox::bottom - height));
    var_background.setSize(sf::Vector2f(window_size.x - chat::graphics::distance::textbox::left - chat::graphics::distance::textbox::right, height));
}

void chat::graphics::textbox::render() {
    var_rendertarget.get()->draw(var_background);
}

