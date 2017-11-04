#ifndef CHAT_GFX_SIDEBAR
#define CHAT_GFX_SIDEBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"
#include "rendervector.hpp"

namespace chat {
    namespace graphics {
        namespace sidebar {
            class slider: public interfaces::renderable, public unit {
            private:
                typedef enum {ACTIVE = 1, INACTIVE = -1} status;
                status          var_slider_active;
                int             var_slider_pos;
                rendervector    var_vector;

            public:
                slider(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
                void toggle();
            };
            


            class main: public interfaces::renderable, public unit {
            private:
                rendervector var_vector;

            public:
                main(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
            };



            class core: public interfaces::renderable, public interfaces::triggerable, public unit {
            private:
                sidebar::main   var_main;
                sidebar::slider var_slider;

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
