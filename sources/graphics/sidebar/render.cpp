#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"

void chat::graphics::sidebar::render() {
    while (var_active && var_slider_width < chat::graphics::size::slider::width) {
        var_slider_width += 10;
        break;
    }

    while (!var_active && var_slider_width > 9) {
        var_slider_width -= 10;
        break;
    }

    if (var_active) {
        var_rendertarget.get()->draw(var_background_cover);
    }

    update();
    var_rendertarget.get()->draw(var_background_slider);
    var_rendertarget.get()->draw(var_background);
}
