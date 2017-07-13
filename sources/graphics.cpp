#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/graphics.hpp"

chat::graphics::core::core() {
	var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(1024, 768), "Chat client");
        
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);

        while (var_rendertarget.get()->isOpen()) {
             sf::Event event;
             while (var_rendertarget.get()->pollEvent(event))
             {
                if (event.type == sf::Event::Closed)
                     var_rendertarget.get()->close();
             }

             var_rendertarget.get()->clear();
             var_rendertarget.get()->draw(shape);
             var_rendertarget.get()->display();
        }
}
