#ifndef CHAT_GFX_BUTTON
#define CHAT_GFX_BUTTON
#include <memory>
#include <string>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"
#include "text.hpp"

namespace chat {
    namespace graphics {
        class button: public unit, public interfaces::renderable {
        private:
            sf::RectangleShape   var_background;
            sf::Color            var_color_active;
            chat::graphics::text var_text;

        public:
           button(const std::shared_ptr <sf::RenderWindow>&); 
           button(const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&);
           button(const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&, const sf::Vector2f&);
           button(const std::shared_ptr <sf::RenderWindow>&, const sf::Vector2f&, const sf::Vector2f&, const sf::Color&);

           void render();
           void update();
                    
           void move(const sf::Vector2f&);
           void setPosition(const sf::Vector2f&);
           void setTextAlignment(const chat::graphics::text::alignment&);
           void setSize(const sf::Vector2f&);
           void setActiveColor(const sf::Color&);

           void assign(const sf::Texture&);
           void assign(const std::string&);
        };
    }
}

#endif // CHAT_GFX_BUTTON
