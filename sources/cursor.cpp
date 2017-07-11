#include "SFML/Graphics.hpp"
#include "../headers/cursor.hpp"

chat::graphics::cursor::cursor(const sf::Vector2f& size, const sf::Color& color) {
    var_rectangle.setSize(size);
    var_rectangle.setFillColor(color);
    var_rectangle.setOutlineThickness(0);
    var_rectangle.setOutlineColor(sf::Color::Black);
}

void chat::graphics::cursor::setSize(const sf::Vector2f& param) {
    var_rectangle.setSize(param);
}

void chat::graphics::cursor::setPosition(const sf::Vector2f& param) {
    var_rectangle.setPosition(param);
}

const sf::Vector2f& chat::graphics::cursor::size() const {
    return var_rectangle.getSize();
}

const sf::Vector2f& chat::graphics::cursor::position() const {
    return var_rectangle.getPosition();
}

void chat::graphics::cursor::render() {
    //do stuff
}


