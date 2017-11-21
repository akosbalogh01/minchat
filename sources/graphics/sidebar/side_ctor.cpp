#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "sidebar/main.hpp"
#include "button.hpp"
#include "rectangle.hpp"

typedef std::shared_ptr <sf::RenderWindow> rendertarget;
typedef enum {USER, NETWORK, SETTINGS, QUIT} button_type;
typedef enum {BACKGROUND} rectangle_type;

static void create_rectangle(chat::graphics::rendervector&, const rendertarget&, const rectangle_type&);
static void create_button(chat::graphics::rendervector&, const rendertarget&, const button_type&);

chat::graphics::sidebar::main::main(const rendertarget& param): var_vector(param) {
    var_rendertarget = param;

    create_rectangle(var_vector, var_rendertarget, BACKGROUND);
    create_button(var_vector, var_rendertarget, USER);
    create_button(var_vector, var_rendertarget, NETWORK);
    create_button(var_vector, var_rendertarget, SETTINGS);
    create_button(var_vector, var_rendertarget, QUIT);
}

// auxiliary function implementations
void create_rectangle(chat::graphics::rendervector& target, const rendertarget& param, const rectangle_type& type) {
    std::shared_ptr <interfaces::renderable> new_rectangle = std::make_shared <chat::graphics::rectangle> (param);
    chat::graphics::rectangle* rectangle = dynamic_cast <chat::graphics::rectangle*> (new_rectangle.get());
    
    switch (type) {
        case BACKGROUND:
            rectangle->setSize(sf::Vector2f(chat::graphics::size::sidebar::width, chat::graphics::size::window::height));
            rectangle->setPosition(sf::Vector2f(0, 0));
            rectangle->setColor(chat::graphics::color::sidebar);
            break;
    }

    target.add(new_rectangle);
}

void create_button(chat::graphics::rendervector& target, const rendertarget& param, const button_type& type) {
    sf::Vector2f button_size(chat::graphics::size::sidebar::width, chat::graphics::size::sidebar::width);
    
    std::shared_ptr <interfaces::renderable> new_button = std::make_shared <chat::graphics::button> (param);
    chat::graphics::button* button = dynamic_cast <chat::graphics::button*> (new_button.get());
    button->setSize(button_size);

    switch (type) {
        case USER:
            button->setPosition(sf::Vector2f(0, 0));
            break;

        case NETWORK:
            button->setPosition(sf::Vector2f(0, chat::graphics::size::sidebar::width));
            break;

        case SETTINGS:
            button->setPosition(sf::Vector2f(0, 2*chat::graphics::size::sidebar::width));
            break;

        case QUIT:
            button->setPosition(sf::Vector2f(0, chat::graphics::size::window::height - chat::graphics::size::sidebar::width));
            button->setActiveColor(chat::graphics::color::buttons_quit_active);
            break;
    }

    target.add(new_button);

}
