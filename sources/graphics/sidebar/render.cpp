#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"
#include "button.hpp"

void chat::graphics::sidebar::render() {
    while (var_active && var_slider_width < chat::graphics::size::slider::width) {
        var_slider_width += 10;
        for (unsigned int i = 0; i < 4; i++) {
            dynamic_cast <chat::graphics::button*> (var_buttons_slider[i].get())->move(sf::Vector2f(10, 0));
        }
        break;
    }

    while (!var_active && var_slider_width > 9) {
        var_slider_width -= 10;
        for (unsigned int i = 0; i < 4; i++) {
            dynamic_cast <chat::graphics::button*> (var_buttons_slider[i].get())->move(sf::Vector2f(-10, 0));
        }
        break;
    }

    if (var_active) {
        var_rendertarget.get()->draw(var_background[COVER]);
    }

    update();
    var_rendertarget.get()->draw(var_background[SLIDER]);
    var_buttons_slider.render();
    var_rendertarget.get()->draw(var_background[MAIN]);
    var_buttons.render();
}

/*

void chat::graphics::sidebar::render() {
    
    update(); //includes invoking update on sidebar rendervector buttons, set quit button to new position

    var_sidebar.render(); //rendervector that holds all renderable, triggerable sidebar elements
    var_slider.render();  //rendervector that holds all renderable, triggerable slider elements

}

*/
