#include <memory>
#include "SFML/Graphics.hpp"
#include "rectangle.hpp"

chat::graphics::rectangle::rectangle(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
}
