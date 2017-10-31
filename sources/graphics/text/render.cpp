#include "text.hpp"

void chat::graphics::text::render() {
    var_rendertarget.get()->draw(var_text);
}
