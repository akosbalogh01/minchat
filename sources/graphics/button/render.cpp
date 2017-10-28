#include "button.hpp"

void chat::graphics::button::render() {
    var_rendertarget.get()->draw(var_background);
}
