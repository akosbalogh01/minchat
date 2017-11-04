#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar/core.hpp"
#include "sidebar/main.hpp"
#include "sidebar/slider.hpp"
#include "button.hpp"
#include "rectangle.hpp"

void chat::graphics::sidebar::core::render() {
    var_slider.render();
    var_main.render(); 
}

void chat::graphics::sidebar::main::render() {
    var_vector.render(); 
}

void chat::graphics::sidebar::slider::render() {
    int bounds_left  = (int) chat::graphics::size::sidebar::width - (int) chat::graphics::size::slider::width;
    int bounds_right = (int) chat::graphics::size::sidebar::width; 
    auto window_size = var_rendertarget.get()->getSize();

    while (var_slider_pos > bounds_left && var_slider_pos <= bounds_right) {
        var_slider_pos += var_slider_active * 10;
        dynamic_cast <chat::graphics::rectangle*> (var_vector[0].get())->setPosition(sf::Vector2f(var_slider_pos, 0));
        for (unsigned int i = 1; i < 4; i++) {
            dynamic_cast <chat::graphics::button*> (var_vector[i].get())->setPosition(sf::Vector2f(var_slider_pos, (i-1)*50));
        }
        dynamic_cast <chat::graphics::button*> (var_vector.last().get())->setPosition(sf::Vector2f(var_slider_pos, window_size.y - chat::graphics::size::sidebar::width));
        break;
    }

    if (var_slider_pos > bounds_left) {
        var_vector.render();
    }
}
