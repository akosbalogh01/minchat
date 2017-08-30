#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/constants.hpp"
#include "../headers/sidebar.hpp"

chat::graphics::sidebar::sidebar(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
    var_active = false;
    var_slider_width = 0;

    update();
    var_background.setFillColor(sf::Color::Cyan);
    var_background.setOutlineThickness(2);
    var_background.setOutlineColor(sf::Color::Black);

    var_background_slider.setFillColor(sf::Color::Cyan);
    var_background_slider.setOutlineThickness(2);
    var_background_slider.setOutlineColor(sf::Color::Black);

    var_background_cover.setFillColor(sf::Color::Black);
    var_background_cover.setOutlineThickness(0);
    var_background_cover.setOutlineColor(sf::Color::Black);
    var_background_cover.setPosition(sf::Vector2f(0, 0));
}

void chat::graphics::sidebar::render() {
    while (var_active && var_slider_width < chat::graphics::size::slider::width) {
        var_slider_width+=3;
    }

    while (!var_active && var_slider_width > 2) {
        var_slider_width-=3;
    }
    
    if (var_active) {
        var_rendertarget.get()->draw(var_background_cover);
    }
    var_rendertarget.get()->draw(var_background_slider);    
    var_rendertarget.get()->draw(var_background);
}

void chat::graphics::sidebar::update() {
    sf::Vector2u window_size = var_rendertarget.get()->getSize();
    var_background.setPosition(sf::Vector2f(chat::graphics::distance::sidebar::left, chat::graphics::distance::sidebar::top));
    var_background.setSize(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, window_size.y));
    var_background_cover.setSize(sf::Vector2f(window_size.x, window_size.y));
    var_background_slider.setSize(sf::Vector2f(var_slider_width, window_size.y));
}

void chat::graphics::sidebar::setActive(const bool& param) {
    var_active = param;
}

const bool chat::graphics::sidebar::isActive() const {
    return var_active;
}
