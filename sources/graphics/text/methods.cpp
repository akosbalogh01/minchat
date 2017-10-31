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
    //if param is true, set handle to the centre of text bounds
}

void chat::graphics::text::setString(const std::string& param) {
    var_text.setString(param);
}

const sf::Vector2f& chat::graphics::text::bounds() const {
    //return bounds of current text
}
