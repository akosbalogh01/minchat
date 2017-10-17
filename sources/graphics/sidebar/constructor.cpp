#include <cmath>
#include <iostream>
#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "graphics.hpp"
#include "sidebar.hpp"

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
    var_background_slider.setPosition(sf::Vector2f(chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea, 0));

    var_background_cover.setFillColor(sf::Color::Black);
    var_background_cover.setOutlineThickness(0);
    var_background_cover.setOutlineColor(sf::Color::Black);
    var_background_cover.setPosition(sf::Vector2f(0, 0));
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

const bool chat::graphics::sidebar::interpret(const sf::Event& event) const {
    if (event.type == sf::Event::MouseButtonReleased && (unsigned) event.mouseButton.x < chat::graphics::distance::textarea::left - chat::graphics::distance::sidebar::textarea) {
        return true;
    }

    return false;
}

void chat::graphics::sidebar::trigger() {
    var_active = !var_active;
}
