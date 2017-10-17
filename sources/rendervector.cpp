#include <vector>
#include <memory>
#include <utility>
#include "SFML/Graphics.hpp"
#include "../headers/rendervector.hpp"

chat::graphics::rendervector::rendervector(const std::shared_ptr <sf::RenderWindow>& param) {
    var_rendertarget = param;
}

void chat::graphics::rendervector::render() {
    for (const auto& render_index: var_vector) {
        render_index.get()->render();
    }
}

void chat::graphics::rendervector::update() {
    for (auto& index: var_vector) {
        index.get()->update();
    }
}


void chat::graphics::rendervector::add(std::shared_ptr <interfaces::renderable>& param) {
    var_vector.push_back(param);
}

void chat::graphics::rendervector::add(std::shared_ptr <interfaces::triggerable>& param) {
    var_triggers.push_back(param);
}

void chat::graphics::rendervector::processTrigger(const sf::Event& event) {
    for (const auto& index: var_triggers) {
        if (index.get()->interpret(event)) {
            index.get()->execute();
            return; 
        }
    }
}
