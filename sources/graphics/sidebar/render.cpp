#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"
#include "button.hpp"

void chat::graphics::sidebar::core::render() {
    var_slider.render();
    var_main.render(); 
}

void chat::graphics::sidebar::main::render() {
    var_vector.render(); 
}

void chat::graphics::sidebar::slider::render() {
    var_vector.render(); 
}
