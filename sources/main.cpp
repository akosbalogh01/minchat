#include "SFML/Graphics.hpp"
#include "../headers/logic.hpp"
#include "../headers/graphics.hpp"

int main() {
     chat::logic::core program;
     program.loadSettings("release/settings");
     
     chat::graphics::core graphics;
     //while (program.isRunning()) {
     //    logic.processEvents();
     //    logic.processInput();
     //    graphics.render();
     //}     
     return 0;
}

//exception handling
