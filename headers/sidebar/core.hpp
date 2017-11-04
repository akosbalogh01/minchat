#ifndef CHAT_GFX_SIDEBAR_CORE
#define CHAT_GFX_SIDEBAR_CORE
#include <memory>
#include "SFML/Graphics.hpp"
#include "main.hpp"
#include "slider.hpp"

namespace chat {
    namespace graphics {
        namespace sidebar {
            class core: public interfaces::renderable, public interfaces::triggerable, public unit {
            private:
                main   var_main;
                slider var_slider;

            public:
                core(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
                void execute();
                const bool interpret(const sf::Event&);
            };
        }
    }
}

#endif
