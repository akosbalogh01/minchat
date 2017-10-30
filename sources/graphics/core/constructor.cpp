#include <memory>
#include "SFML/Graphics.hpp"
#include "constants.hpp"
#include "graphics.hpp"

chat::graphics::core::core() {
    var_rendertarget = std::make_shared <sf::RenderWindow> (sf::VideoMode(chat::graphics::size::window::width, chat::graphics::size::window::height), chat::logic::windowname);
    var_rendertarget.get()->setFramerateLimit(chat::logic::framelimit);
    init_render_vectors();
    setRenderVectorTo(MAIN);
}
