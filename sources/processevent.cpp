#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/logic.hpp"

inline void closeWindow(std::shared_ptr <sf::RenderWindow>&, bool&);
inline void resizeWindow(std::shared_ptr <sf::RenderWindow>&);

void chat::logic::core::processEvents() {
    while (var_rendertarget.get()->pollEvent(*var_event.get())) {
        switch (var_event.get()->type) {
            case sf::Event::Closed:
                closeWindow(var_rendertarget, var_running);
                break;

            case sf::Event::Resized:
                resizeWindow(var_rendertarget);
                break;

            default:

                break;
        }
    }
}

inline void closeWindow(std::shared_ptr <sf::RenderWindow>& var_rendertarget, bool& var_running) {
    var_rendertarget.get()->close();
    var_running = false;
}

inline void resizeWindow(std::shared_ptr <sf::RenderWindow>& var_rendertarget) {
    sf::View temp_view(sf::FloatRect(0.f, 0.f, var_rendertarget.get()->getSize().x, var_rendertarget.get()->getSize().y));
    var_rendertarget.get()->setView(temp_view);
}
