#include "rectangle.hpp"

void chat::graphics::rectangle::render() {
    var_rendertarget.get()->draw(var_background);
}
