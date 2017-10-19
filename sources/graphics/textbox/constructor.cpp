#include <memory>
#include "SFML/Graphics.hpp"
#include "textbox.hpp"

chat::graphics::textbox::textbox(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    update();
    var_background.setFillColor(sf::Color::Blue);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);
}