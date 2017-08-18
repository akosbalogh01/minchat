#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/tabsbar.hpp"
#include "../headers/constants.hpp"


chat::graphics::tabsbar::tabsbar(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    update();
    var_background.setFillColor(sf::Color::White);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}

void chat::graphics::tabsbar::render() {
    var_rendertarget.get()->draw(var_background);
}

void chat::graphics::tabsbar::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::tabsbar::left, chat::graphics::distance::tabsbar::top));
    sf::Vector2f size(window_size.x - chat::graphics::distance::tabsbar::left - chat::graphics::distance::tabsbar::right,
    chat::graphics::distance::textarea::top - chat::graphics::distance::tabsbar::top);
    var_background.setSize(size);
}
