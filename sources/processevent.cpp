#include <iostream>
#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/graphics.hpp"
#include "../headers/logic.hpp"

inline void closeWindow(std::shared_ptr  <chat::graphics::core>&, bool&);
inline void resizeWindow(std::shared_ptr <chat::graphics::core>&);

void chat::logic::core::processEvents() {
    while (var_graphics.get()->renderTarget().get()->pollEvent(*var_event.get())) {
        switch (var_event.get()->type) {
            case sf::Event::Closed:
                closeWindow(var_graphics, var_running);
                break;

            case sf::Event::Resized:
                resizeWindow(var_graphics);
                break;

            default:

                break;
        }
    }
}

inline void closeWindow(std::shared_ptr <chat::graphics::core>& var_graphics, bool& var_running) {
    var_graphics.get()->renderTarget().get()->close();
    var_running = false;
}

inline void resizeWindow(std::shared_ptr <chat::graphics::core>& var_graphics) {
    float xxx = var_graphics.get()->renderTarget().get()->getSize().x;
    float yyy = var_graphics.get()->renderTarget().get()->getSize().y;
    std::cout << "[LOG] New window size: " << xxx << ";" << yyy << std::endl;
    sf::View temp_view(sf::FloatRect(0.f, 0.f, xxx, yyy));
    var_graphics.get()->renderTarget().get()->setView(temp_view);
    var_graphics.get()->update();
}
