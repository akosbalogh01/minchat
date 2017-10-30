#include "constants.hpp"
#include "graphics.hpp"
#include "button.hpp"

inline bool intersects(const sf::RectangleShape&, const sf::Vector2i&);

void chat::graphics::button::render() {
    if (intersects(var_background, chat::graphics::core::mousePosition)) {var_background.setFillColor(sf::Color::White);}

    var_rendertarget.get()->draw(var_background);
    var_background.setFillColor(chat::graphics::color::buttons);
}


inline bool intersects(const sf::RectangleShape& var_background, const sf::Vector2i& var_mouse_position) {
    if (var_background.getPosition().x < var_mouse_position.x && var_background.getPosition().x + var_background.getSize().x > var_mouse_position.x &&
        var_background.getPosition().y < var_mouse_position.y && var_background.getPosition().y + var_background.getSize().y > var_mouse_position.y)
    {
        return true;
    }

    return false;
}
