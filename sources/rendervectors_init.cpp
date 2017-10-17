#include "SFML/Graphics.hpp"
#include "../headers/graphics.hpp"
#include "../headers/rendervector.hpp"
#include "../headers/textbox.hpp"
#include "../headers/sidebar.hpp"
#include "../headers/textarea.hpp"
#include "../headers/tabsbar.hpp"
#include "../headers/trigger.hpp"
//include all graphical and logical units...

void chat::graphics::core::init_render_vectors() {
    chat::graphics::rendervector main_menu(var_rendertarget);

    std::shared_ptr <interfaces::renderable> textbox  = std::make_shared <chat::graphics::textbox>  (var_rendertarget);
    std::shared_ptr <interfaces::renderable> textarea = std::make_shared <chat::graphics::textarea> (var_rendertarget);
    std::shared_ptr <interfaces::renderable> tabsbar  = std::make_shared <chat::graphics::tabsbar>  (var_rendertarget);
    std::shared_ptr <interfaces::renderable> sidebar  = std::make_shared <chat::graphics::sidebar>  (var_rendertarget);
    main_menu.add(textbox);
    main_menu.add(textarea);
    main_menu.add(tabsbar);
    main_menu.add(sidebar);
    

    std::function <const bool(const sf::Event&)> sidebar_interpreter =  std::bind(&chat::graphics::sidebar::interpret, dynamic_cast <chat::graphics::sidebar*> (sidebar.get()), std::placeholders::_1);
    std::function <void()> sidebar_executor = std::bind(&chat::graphics::sidebar::trigger, dynamic_cast <chat::graphics::sidebar*> (sidebar.get()));
    std::shared_ptr <interfaces::triggerable> sidebar_trigger = std::make_shared <chat::logic::trigger> (sf::Event::EventType::MouseButtonReleased, sidebar_interpreter, sidebar_executor);
    main_menu.add(sidebar_trigger);
    

    var_renderlist.push_back(main_menu);
}
