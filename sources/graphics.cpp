#include <memory>
#include <vector>
#include "SFML/Graphics.hpp"
#include "../headers/interfaces.hpp"
#include "../headers/graphics.hpp"
const std::string  windowname   = "Chat client";
const unsigned int windowwidth  = 1024;
const unsigned int windowheight = 768;
const unsigned int framelimit   = 60;
const sf::Color    bgcolor      = sf::Color(128, 128, 128);


chat::graphics::core::core() {
    var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(windowwidth, windowheight), windowname);
    var_rendertarget.get()->setFramerateLimit(framelimit);
}

const std::shared_ptr <sf::RenderWindow> chat::graphics::core::renderTarget() const {
    return var_rendertarget;
}

const std::vector <std::unique_ptr <interfaces::renderable>>& chat::graphics::core::renderList() {
    return var_renderlist;
}

void chat::graphics::core::render() {
    var_rendertarget.get()->clear(bgcolor);

    for (const auto& render_index: var_renderlist) {
        render_index->render();
    }

    var_rendertarget.get()->display();
}
