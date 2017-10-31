#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "text.hpp"

chat::graphics::text::text(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    sf::Font font;
    font.loadFromFile("release/roboto.ttf");
    var_text.setFont(font);
    var_text.setFillColor(chat::graphics::color::text);
    var_text.setCharacterSize(20);
}
