#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "interfaces.hpp"
#include "rendervector.hpp"
#include "rectangle.hpp"
#include "button.hpp"
#include "sidebar/slider.hpp"

typedef std::shared_ptr <sf::RenderWindow> rendertarget;
typedef enum {USER, NETWORK, SETTINGS, QUIT} button_type;
typedef enum {BACKGROUND} rectangle_type;

static void create_rectangle(chat::graphics::rendervector&, const rendertarget&, const rectangle_type&);
static void create_button(chat::graphics::rendervector&, const rendertarget&, const button_type&);

chat::graphics::sidebar::slider::slider(const rendertarget& param): var_vector(param) {
    var_rendertarget  = param;
    var_slider_active = INACTIVE;
    var_slider_pos    = chat::graphics::size::sidebar::width - chat::graphics::size::slider::width;
    
    create_rectangle(var_vector, var_rendertarget, BACKGROUND);
    create_button(var_vector, var_rendertarget, USER);
    create_button(var_vector, var_rendertarget, NETWORK);
    create_button(var_vector, var_rendertarget, SETTINGS);
    create_button(var_vector, var_rendertarget, QUIT);
}

// auxiliary function implementations
void create_rectangle(chat::graphics::rendervector& target, const std::shared_ptr <sf::RenderWindow>& rendertarget, const rectangle_type& type) {
    std::shared_ptr <interfaces::renderable> new_rectangle = std::make_shared <chat::graphics::rectangle> (rendertarget);
    chat::graphics::rectangle* rectangle = dynamic_cast <chat::graphics::rectangle*> (new_rectangle.get());

    switch (type) {
        case BACKGROUND:
            rectangle->setPosition(sf::Vector2f(chat::graphics::size::sidebar::width - chat::graphics::size::slider::width, 0));
            rectangle->setSize(sf::Vector2f(chat::graphics::size::slider::width, chat::graphics::size::window::height));
            rectangle->setColor(chat::graphics::color::sidebar);
            break;
    }

    target.add(new_rectangle);
}

void create_button(chat::graphics::rendervector& target, const std::shared_ptr <sf::RenderWindow>& rendertarget, const button_type& param) {
    sf::Vector2f button_size(chat::graphics::size::slider::width, chat::graphics::size::sidebar::width);

    std::shared_ptr <interfaces::renderable> new_button = std::make_shared <chat::graphics::button> (rendertarget);
    chat::graphics::button* button = dynamic_cast <chat::graphics::button*> (new_button.get());
    button->setSize(button_size);

    switch (param) {
        case USER: 
            button->setPosition(sf::Vector2f(chat::graphics::size::sidebar::width - chat::graphics::size::slider::width, 0));
            button->assign("User");
            break;
        

        case NETWORK: 
            button->setPosition(sf::Vector2f(chat::graphics::size::sidebar::width - chat::graphics::size::slider::width, 50));
            button->assign("Network");
            break;
        

        case SETTINGS: 
            button->setPosition(sf::Vector2f(chat::graphics::size::sidebar::width - chat::graphics::size::slider::width, 100));
            button->assign("Settings");
            break;
        

        case QUIT: 
            button->setPosition(sf::Vector2f(chat::graphics::size::sidebar::width - chat::graphics::size::slider::width, chat::graphics::size::window::height - chat::graphics::size::sidebar::width));
            button->assign("Quit");
            button->setActiveColor(chat::graphics::color::buttons_quit_active);
            break;
        
    }

    target.add(new_button);
}
