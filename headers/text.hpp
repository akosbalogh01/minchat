#ifndef CHAT_GFX_TEXT
#define CHAT_GFX_TEXT
#include <memory>
#include <string>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class text: public interfaces::renderable, public unit {
        private:
            sf::Text var_text;

        public:
            text(const std::shared_ptr <sf::RenderWindow>&);

            void render() const;
            void update();

            void setPosition(const sf::Vector2f&);
            void setFontSize(const unsigned int);
            void setCentered(const bool);
            void setString(const std::string&);

            const sf::Vector2f& bounds() const;
        };
    }
}

#endif