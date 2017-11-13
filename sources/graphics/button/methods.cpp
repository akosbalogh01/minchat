#include <string>
#include "SFML/Graphics.hpp"
#include "button.hpp"

void chat::graphics::button::setPosition(const sf::Vector2f& param) {
    var_background.setPosition(param);
    var_text.setPosition(param);
}

void chat::graphics::button::setSize(const sf::Vector2f& param) {
    var_background.setSize(param);
}

void chat::graphics::button::move(const sf::Vector2f& param) {
    var_background.move(param);
}

void chat::graphics::button::assign(const sf::Texture&) {

}

void chat::graphics::button::assign(const std::string& text) {
    var_text.setString(text);
    //var_text.setCentered(true);
}
