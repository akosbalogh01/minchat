#ifndef CHAT_GFX_BUTTON
#define CHAT_GFX_BUTTON
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class button: public unit, public interfaces::renderable {
        private:
            sf::RectangleShape var_background;

        public:
           button(const std::shared_ptr <sf::RenderWindow>&); 
           button(const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&);
           button(const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&, const sf::Vector2f&);

           void render();
           void update();
            
           void move(const sf::Vector2f&);
           void setPosition(const sf::Vector2f&);
           void setSize(const sf::Vector2f&);
        };
    }
}

#endif // CHAT_GFX_BUTTON
