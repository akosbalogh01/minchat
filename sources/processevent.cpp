#include <iostream>
#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/graphics.hpp"
#include "../headers/logic.hpp"

inline void closeWindow(std::shared_ptr  <chat::graphics::core>&, bool&);
inline void resizeWindow(std::shared_ptr <chat::graphics::core>&);
inline void mouseRelease(std::shared_ptr <chat::graphics::core>&, std::shared_ptr <sf::Event>&);

void chat::logic::core::processEvents() {
    while (var_graphics.get()->renderTarget().get()->pollEvent(*var_event.get())) {
        switch (var_event.get()->type) {
            case sf::Event::Closed:
                closeWindow(var_graphics, var_running);
                break;

            case sf::Event::Resized:
                resizeWindow(var_graphics);
                break;
            
            case sf::Event::MouseButtonReleased:
                mouseRelease(var_graphics, var_event); 
                break;

            default:

                break;
        }
    }
}

inline void closeWindow(std::shared_ptr <chat::graphics::core>& var_graphics, bool& var_running) {
    std::cout << "[LOG] Closing..." << std::endl;
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

inline void mouseRelease(std::shared_ptr <chat::graphics::core>& var_graphics, std::shared_ptr <sf::Event>& var_event) {
    float xxx = var_event.get()->mouseButton.x;
    float yyy = var_event.get()->mouseButton.y;
    std::cout << "[LOG] Mouse clicked at: " << xxx << ";" << yyy << std::endl;
    var_graphics.get()->processTriggers(*var_event.get());
}
