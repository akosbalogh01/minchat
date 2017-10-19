#include "SFML/Graphics.hpp"
#include "graphics.hpp"

void chat::graphics::core::processTriggers(const sf::Event& event) {
	var_renderlist[var_selected_renderlist_index].processTrigger(event);    
}