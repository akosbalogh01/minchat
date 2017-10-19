#include "SFML/Graphics.hpp"
#include "textbox.hpp"

void chat::graphics::textbox::render() {
    var_rendertarget.get()->draw(var_background);
}