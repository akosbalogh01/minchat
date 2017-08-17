#ifndef CHAT_GFX_SIDEBAR
#define CHAT_GFX_SIDEBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class sidebar: public interfaces::renderable, public unit {
        private:
            sf::RectangleShape var_background;

        public:
            sidebar(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
        };
    }
}

#endif
