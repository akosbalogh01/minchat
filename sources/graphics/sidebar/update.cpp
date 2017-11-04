#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "graphics.hpp"
#include "rectangle.hpp"
#include "button.hpp"
#include "sidebar/core.hpp"
#include "sidebar/main.hpp"
#include "sidebar/slider.hpp"

void chat::graphics::sidebar::core::update() {
    var_main.update();
    var_slider.update(); 
}

void chat::graphics::sidebar::main::update() {
    auto window_size = var_rendertarget.get()->getSize();
    
    dynamic_cast <chat::graphics::rectangle*> (var_vector[0].get())->setSize(sf::Vector2f(chat::graphics::size::sidebar::width, window_size.y));
    dynamic_cast <chat::graphics::button*> (var_vector.last().get())->setPosition(sf::Vector2f(0, window_size.y - chat::graphics::size::sidebar::width));
}

void chat::graphics::sidebar::slider::update() {
    auto window_size = var_rendertarget.get()->getSize();
     
    dynamic_cast <chat::graphics::rectangle*> (var_vector[0].get())->setSize(sf::Vector2f(chat::graphics::size::slider::width, window_size.y));
    dynamic_cast <chat::graphics::button*> (var_vector.last().get())->setPosition(sf::Vector2f(var_slider_pos, window_size.y - chat::graphics::size::sidebar::width));
}
