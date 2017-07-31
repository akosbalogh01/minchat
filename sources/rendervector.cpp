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

void chat::graphics::rendervector::add(std::unique_ptr <interfaces::renderable>& param) {
    var_vector.push_back(std::move(param));
}
