#include "../headers/graphics.hpp"
#include "../headers/rendervector.hpp"
#include "../headers/textbox.hpp"
//include all graphical units...

void chat::graphics::core::init_render_vectors() {
    chat::graphics::rendervector main_menu(var_rendertarget);

    std::shared_ptr <interfaces::renderable> textbox = std::make_shared <chat::graphics::textbox> (var_rendertarget);
    main_menu.add(textbox);

    var_renderlist.push_back(main_menu);
}
