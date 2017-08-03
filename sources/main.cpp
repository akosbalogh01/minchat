#include "SFML/Graphics.hpp"
#include "../headers/logic.hpp"
#include "../headers/graphics.hpp"

int main() {
    chat::logic::core program;
    program.loadSettings("release/settings");

    chat::graphics::core graphics;
    program.setRenderTarget(graphics.renderTarget());

    while (program.isRunning()) {
        program.processEvents();
        graphics.render();
    }

    return 0;
}

//exception handling
