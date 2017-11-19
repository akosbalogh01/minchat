#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "button.hpp"

chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param): var_text(param) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons);
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    
    var_color_active = chat::graphics::color::buttons_active;
}

chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size): var_text(param) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons); 
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    var_background.setSize(size);
    
    var_color_active = chat::graphics::color::buttons_active;
}

chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size, const sf::Vector2f& position): var_text(param) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons); 
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    var_background.setSize(size);
    var_background.setPosition(position);
    
    var_color_active = chat::graphics::color::buttons_active;
}


chat::graphics::button::button(const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& active_color): var_text(param) {
    var_rendertarget = param;

    var_background.setFillColor(chat::graphics::color::buttons); 
    var_background.setOutlineColor(sf::Color::Black);
    var_background.setOutlineThickness(1);
    var_background.setSize(size);
    var_background.setPosition(position);
    
    var_color_active = active_color;
}
