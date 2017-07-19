#include <memory>
#include <vector>
#include "SFML/Graphics.hpp"
#include "../headers/interfaces.hpp"
#include "../headers/graphics.hpp"

chat::graphics::core::core() {
    var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(1024, 768), "Chat client");
}

const std::shared_ptr <sf::RenderWindow> chat::graphics::core::renderTarget() const {
    return var_rendertarget;
}

const std::vector <std::unique_ptr <interfaces::renderable>>& chat::graphics::core::renderList() {
    return var_renderlist;
}

void chat::graphics::core::render() {
    var_rendertarget.get()->clear(sf::Color::Blue);

    for (const auto& render_index: var_renderlist) {
        render_index->render();
    }

    var_rendertarget.get()->display();
}
