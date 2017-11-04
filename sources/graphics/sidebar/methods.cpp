#include <iostream>
#include "sidebar/slider.hpp"

void chat::graphics::sidebar::slider::toggle() {
    if (var_slider_active == ACTIVE) {var_slider_active = INACTIVE;}
    else                             {var_slider_active = ACTIVE;}

    var_slider_pos += var_slider_active;
    std::cout << "[LOG] Current slider position: " << var_slider_pos << std::endl;
}
