#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "text.hpp"

sf::Font chat::graphics::text::var_font = sf::Font();

chat::graphics::text::text(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;

    var_font.loadFromFile("release/roboto.ttf");
    var_text.setFont(var_font);
    var_text.setFillColor(chat::graphics::color::text);
    var_text.setCharacterSize(20);
}
