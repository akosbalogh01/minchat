#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"
#include "button.hpp"

const sf::Vector2f button_size(chat::graphics::size::sidebar::buttons::quit::width, chat::graphics::size::sidebar::buttons::quit::height);
const sf::Vector2f button_slider_size(chat::graphics::size::sidebar::buttons::slider::width, chat::graphics::size::sidebar::buttons::slider::height);
void create_button(const std::shared_ptr <sf::RenderWindow>&, chat::graphics::rendervector&, const sf::Vector2f&);

chat::graphics::sidebar::sidebar(const std::shared_ptr <sf::RenderWindow>& param): var_buttons(param), var_buttons_slider(param) {
    var_rendertarget = param;
    var_active = false;
    var_slider_width = 0;

    update();
    var_background[MAIN].setFillColor(sf::Color::Cyan);
    var_background[MAIN].setOutlineThickness(2);
    var_background[MAIN].setOutlineColor(sf::Color::Black);

    var_background[SLIDER].setFillColor(sf::Color::Cyan);
    var_background[SLIDER].setOutlineThickness(2);
    var_background[SLIDER].setOutlineColor(sf::Color::Black);
    var_background[SLIDER].setPosition(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, 0));

    var_background[COVER].setFillColor(sf::Color::Black);
    var_background[COVER].setOutlineThickness(0);
    var_background[COVER].setOutlineColor(sf::Color::Black);
    var_background[COVER].setPosition(sf::Vector2f(0, 0));
    
    for (unsigned int i = 0; i < 4; i++) {
        create_button(var_rendertarget, var_buttons, button_size);
        create_button(var_rendertarget, var_buttons_slider, button_slider_size);
        dynamic_cast <chat::graphics::button*> (var_buttons[i].get())->setPosition(sf::Vector2f(0, i*50));
        dynamic_cast <chat::graphics::button*> (var_buttons_slider[i].get())->setPosition(sf::Vector2f(-150, i*50));
    }
}


void create_button(const std::shared_ptr <sf::RenderWindow>& var_rendertarget, chat::graphics::rendervector& var_buttons, const sf::Vector2f& size) { 
    std::shared_ptr <interfaces::renderable> button = std::make_shared <chat::graphics::button> (var_rendertarget, size);
    var_buttons.add(button);
}

/*
chat::graphics::sidebar::slider(const std::shared_ptr <sf::RenderWindow>& param): var_buttons(param) {

}

chat::graphics::sidebar::main(const std::shared_ptr <sf::RenderWindow>& param): var_buttons(param) {

}

chat::graphics::sidebar::core(const std::shared_ptr <sf::RenderWindow>& param) {

}
*/
