#include "text.hpp"

void chat::graphics::text::render() const {
    var_rendertarget.get()->draw(var_text);
}
