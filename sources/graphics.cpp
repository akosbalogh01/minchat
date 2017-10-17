#include <memory>
#include <vector>
#include "SFML/Graphics.hpp"
#include "../headers/constants.hpp"
#include "../headers/interfaces.hpp"
#include "../headers/graphics.hpp"

chat::graphics::core::core() {
    var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(chat::graphics::size::window::width, chat::graphics::size::window::height), chat::logic::windowname);
    var_rendertarget.get()->setFramerateLimit(chat::logic::framelimit);
    init_render_vectors();
    setRenderVectorTo(MAIN);
}

const std::shared_ptr <sf::RenderWindow>& chat::graphics::core::renderTarget() const {
    return var_rendertarget;
}

void chat::graphics::core::render() {
    var_rendertarget.get()->clear(chat::graphics::color::background);
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

const chat::graphics::core::rendervector_type chat::graphics::core::renderVectorIndex() const {
    return var_selected_renderlist_index;
}

void chat::graphics::core::processTriggers(const sf::Event& event) {
    var_renderlist[var_selected_renderlist_index].processTrigger(event);    
}
