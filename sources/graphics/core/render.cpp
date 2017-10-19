#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "graphics.hpp"

void chat::graphics::core::render() {
    var_rendertarget.get()->clear(chat::graphics::color::background);
    var_renderlist[var_selected_renderlist_index].render();
    var_rendertarget.get()->display();
}
