#ifndef CHAT_GFX_TABSBAR
#define CHAT_GFX_TABSBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class tabsbar: public interfaces::renderable, public unit {
        private:
            sf::RectangleShape var_background;

        public:
            tabsbar(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
        };
    }
}

#endif
