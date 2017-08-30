#ifndef CHAT_GFX_SIDEBAR
#define CHAT_GFX_SIDEBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class sidebar: public interfaces::renderable, public unit {
        private:
            bool               var_active;
            unsigned int       var_slider_width;
            sf::RectangleShape var_background;
            sf::RectangleShape var_background_slider;
            sf::RectangleShape var_background_cover;

        public:
            sidebar(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
            
            const bool isActive() const;
            void setActive(const bool&);
        };
    }
}

#endif
