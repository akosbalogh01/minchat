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

void chat::graphics::text::setAlignment(const alignment& param) {
    sf::Vector2f size = bounds();
    switch (param) {
        case CENTERED: 
            var_text.setOrigin(sf::Vector2f(floor(size.x/2), floor(size.y/2))); 
            break;

        case CENTERED_VERTICAL:
            //var_text.setOrigin(sf::Vector2f(0, floor(size.y/2))); 
            break;

        case CENTERED_HORIZONTAL:
            var_text.setOrigin(sf::Vector2f(floor(size.x/2), 0));
            break;

        case NORMAL:
            var_text.setOrigin(sf::Vector2f(0, 0));
            break;
    }
}

void chat::graphics::text::setString(const std::string& param) {
    var_text.setString(param);
}

const sf::Vector2f chat::graphics::text::bounds() const {
    sf::FloatRect bounds = var_text.getLocalBounds();
    return sf::Vector2f(bounds.width, bounds.height);
}
