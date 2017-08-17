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
    init_render_vectors();
    setRenderVectorTo(MAIN);
}

const std::shared_ptr <sf::RenderWindow>& chat::graphics::core::renderTarget() const {
    return var_rendertarget;
}

void chat::graphics::core::render() {
    var_rendertarget.get()->clear(bgcolor);
    var_renderlist[var_selected_renderlist_index].render();
    var_rendertarget.get()->display();
}

void chat::graphics::core::update() {
    for (auto& index: var_renderlist) {
        index.update();
    }
}

void chat::graphics::core::setRenderVectorTo(const chat::graphics::core::rendervector_type param) {
    if (var_renderlist.size() > param) {
	var_selected_renderlist_index = param;
	return;
    }

	//throw some exception
	//out of range?
}
