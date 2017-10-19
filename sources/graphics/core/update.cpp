#include "graphics.hpp"

void chat::graphics::core::update() {
    for (auto& index: var_renderlist) {
        index.update();
    }
}