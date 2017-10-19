#include <memory>
#include "graphics.hpp"

const std::shared_ptr <sf::RenderWindow>& chat::graphics::core::renderTarget() const {
    return var_rendertarget;
}

void chat::graphics::core::setRenderVectorTo(const chat::graphics::core::rendervector_type param) {
    if (var_renderlist.size() > param) {
	var_selected_renderlist_index = param;
	return;
    }

	//throw some exception
	//out of range?
}

const chat::graphics::core::rendervector_type chat::graphics::core::renderVectorIndex() const {
    return var_selected_renderlist_index;
}