#ifndef CHAT_GFX_CURSOR
#define CHAT_GFX_CURSOR
#include "SFML/Graphics.hpp"
#include "../headers/interfaces.hpp"

namespace chat {
    namespace graphics {
        class cursor: public interfaces::renderable {
            private:
                sf::RectangleShape      var_rectangle;
                bool                    var_rendered;
                unsigned                var_counter;

            public:
                cursor(const sf::Vector2f&, const sf::Color&);
               
                void setSize(const sf::Vector2f&);
                void setPosition(const sf::Vector2f&);
             
                const sf::Vector2f& size() const;
                const sf::Vector2f& position() const;

                void render();

        };
    }
}

#endif