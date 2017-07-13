#include <memory>
#include "SFML/Graphics.hpp"
#include "../headers/graphics.hpp"

chat::graphics::core::core() {
	var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(1024, 768), "Chat client");
}
