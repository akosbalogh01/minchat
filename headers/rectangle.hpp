#ifndef CHAT_GFX_RECTANGLE
#define CHAT_GFX_RECTANGLE
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"
#include "graphics.hpp"

namespace chat {
    namespace graphics {
        class rectangle: public interfaces::renderable, public unit {
        private:
            sf::RectangleShape  var_background;

        public:
            rectangle(const std::shared_ptr <sf::RenderWindow>&);
            
            void render();
            void update();
            
            void setColor(const sf::Color&);
            void setPosition(const sf::Vector2f&);
            void setSize(const sf::Vector2f&);
            void move(const sf::Vector2f&);
        };
    }
}

#endif

