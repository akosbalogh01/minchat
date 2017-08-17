#ifndef CHAT_GFX_TEXTAREA
#define CHAT_GFX_TEXTAREA
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class textarea: public interfaces::renderable, public unit{
        private:
            sf::RectangleShape var_background;

        public:
            textarea(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
        };
    }
}

#endif
