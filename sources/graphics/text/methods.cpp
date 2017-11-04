#include <cmath>
#include <string>
#include "SFML/Graphics.hpp"
#include "text.hpp"

void chat::graphics::text::setPosition(const sf::Vector2f& param) {
    var_text.setPosition(param);
}

void chat::graphics::text::setFontSize(const unsigned int param) { 
    var_text.setCharacterSize(param);
}

void chat::graphics::text::setCentered(const bool param) {
    sf::Vector2f size = bounds();
    var_text.setOrigin(sf::Vector2f(floor(size.x - (size.x/(param + 1))), floor(size.y - (size.y/(param + 1))))); 
}

void chat::graphics::text::setString(const std::string& param) {
    var_text.setString(param);
}

const sf::Vector2f chat::graphics::text::bounds() const {
    sf::FloatRect bounds = var_text.getLocalBounds();
    return sf::Vector2f(bounds.width, bounds.height);
}
