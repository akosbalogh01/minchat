#include "SFML/Graphics.hpp"
#include "rectangle.hpp"

void chat::graphics::rectangle::setColor(const sf::Color& param) {
    var_background.setFillColor(param);
}

void chat::graphics::rectangle::setPosition(const sf::Vector2f& param) {
    var_background.setPosition(param);
}

void chat::graphics::rectangle::setSize(const sf::Vector2f& param) {
    var_background.setSize(param);
}

void chat::graphics::rectangle::move(const sf::Vector2f& param) {
    var_background.move(param);
}
