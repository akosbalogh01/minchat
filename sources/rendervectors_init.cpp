#include "../headers/graphics.hpp"
#include "../headers/rendervector.hpp"
#include "../headers/textbox.hpp"
#include "../headers/sidebar.hpp"
#include "../headers/textarea.hpp"
//include all graphical units...

void chat::graphics::core::init_render_vectors() {
    chat::graphics::rendervector main_menu(var_rendertarget);

    std::shared_ptr <interfaces::renderable> textbox  = std::make_shared <chat::graphics::textbox>  (var_rendertarget);
    std::shared_ptr <interfaces::renderable> sidebar  = std::make_shared <chat::graphics::sidebar>  (var_rendertarget);
    std::shared_ptr <interfaces::renderable> textarea = std::make_shared <chat::graphics::textarea> (var_rendertarget);
    main_menu.add(textbox);
    main_menu.add(sidebar);
    main_menu.add(textarea);

    var_renderlist.push_back(main_menu);
}
