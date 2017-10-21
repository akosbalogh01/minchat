#ifndef CHAT_GFX_SIDEBAR
#define CHAT_GFX_SIDEBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class sidebar: public interfaces::renderable, public unit {
        private:
            enum {MAIN, SLIDER, COVER};
            bool               var_active;
            unsigned int       var_slider_width;
            sf::RectangleShape var_background[3];

        public:
            sidebar(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
            const bool interpret(const sf::Event&) const;

            const bool isActive() const;
            void setActive(const bool&);
            void trigger();
        };
    }
}

#endif
