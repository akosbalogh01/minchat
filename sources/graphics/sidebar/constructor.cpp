#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar.hpp"
#include "button.hpp"
#include "rectangle.hpp"

inline void create_rectangle(chat::graphics::rendervector&, const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&, const sf::Vector2f&, const sf::Color&);
inline void create_button(chat::graphics::rendervector&, const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&, const sf::Vector2f&);

chat::graphics::sidebar::core::core(const std::shared_ptr <sf::RenderWindow>& param): var_main(param), var_slider(param) {

}

chat::graphics::sidebar::main::main(const std::shared_ptr <sf::RenderWindow>& param): var_vector(param) {
    var_rendertarget = param;
   
    create_rectangle(var_vector, var_rendertarget, sf::Vector2f(chat::graphics::size::sidebar::width, chat::graphics::size::window::height), sf::Vector2f(0, 0), chat::graphics::color::sidebar);

    sf::Vector2f button_size(chat::graphics::size::sidebar::width, chat::graphics::size::sidebar::width);
    create_button(var_vector, var_rendertarget, button_size, sf::Vector2f(0, 0));
    create_button(var_vector, var_rendertarget, button_size, sf::Vector2f(0, 50));
    create_button(var_vector, var_rendertarget, button_size, sf::Vector2f(0, 100));
    create_button(var_vector, var_rendertarget, button_size, sf::Vector2f(0, chat::graphics::size::window::height - chat::graphics::size::sidebar::width)); 
}


chat::graphics::sidebar::slider::slider(const std::shared_ptr <sf::RenderWindow>& param): var_vector(param) {
    var_rendertarget = param;
    
    var_slider_active = INACTIVE;
    var_slider_pos = chat::graphics::size::sidebar::width - chat::graphics::size::slider::width;
    sf::Vector2f rectangle_pos(var_slider_pos, 0);
    create_rectangle(var_vector, var_rendertarget, sf::Vector2f(chat::graphics::size::slider::width, chat::graphics::size::window::height), rectangle_pos, chat::graphics::color::sidebar);

    sf::Vector2f button_size(chat::graphics::size::slider::width, chat::graphics::size::sidebar::width);
    create_button(var_vector, var_rendertarget, button_size, rectangle_pos); 
    create_button(var_vector, var_rendertarget, button_size, rectangle_pos + sf::Vector2f(0, 50)); 
    create_button(var_vector, var_rendertarget, button_size, rectangle_pos + sf::Vector2f(0, 100)); 
    create_button(var_vector, var_rendertarget, button_size, rectangle_pos + sf::Vector2f(0, chat::graphics::size::window::height - chat::graphics::size::sidebar::width)); 
}




//auxiliary function implementations
inline void create_rectangle(chat::graphics::rendervector& target, const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size, const sf::Vector2f& position, const sf::Color& color) {
    std::shared_ptr <interfaces::renderable> new_rectangle = std::make_shared <chat::graphics::rectangle> (param);
    chat::graphics::rectangle* rectangle = dynamic_cast <chat::graphics::rectangle*> (new_rectangle.get());
    rectangle->setPosition(position);
    rectangle->setSize(size);
    rectangle->setColor(color);

    target.add(new_rectangle);
}

inline void create_button(chat::graphics::rendervector& target, const std::shared_ptr <sf::RenderWindow>& param, const sf::Vector2f& size, const sf::Vector2f& position) {
    std::shared_ptr <interfaces::renderable> new_button = std::make_shared <chat::graphics::button> (param);
    chat::graphics::button* button = dynamic_cast <chat::graphics::button*> (new_button.get());
    button->setSize(size);
    button->setPosition(position);
    
    target.add(new_button);
}
