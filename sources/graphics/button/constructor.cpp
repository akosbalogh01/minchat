#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "button.hpp"

chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons);
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
}

chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons); 
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    var_background.setSize(size);
}


chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size, const sf::Vector2f& position) {
    var_rendertarget = param;


    var_background.setFillColor(chat::graphics::color::buttons); 
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    var_background.setSize(size);
    var_background.setPosition(position);
}



