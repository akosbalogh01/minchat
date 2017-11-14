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
            static sf::Font var_font;
            sf::Text        var_text;

        public:
            typedef enum {CENTERED, CENTERED_VERTICAL, CENTERED_HORIZONTAL, NORMAL} alignment;
            text(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();

            void setPosition(const sf::Vector2f&);
            void setFontSize(const unsigned int);
            void setAlignment(const alignment&);
            void setString(const std::string&);

            const sf::Vector2f bounds() const;
        };
    }
}

#endif
