#ifndef CHAT_GFX_SIDEBAR
#define CHAT_GFX_SIDEBAR
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"
#include "rendervector.hpp"

namespace chat {
    namespace graphics {
        /*
        namespace sidebar {
            class slider: public interfaces::renderable, public unit {
            private:
                unsigned int var_slider_width;
                rendervector var_vector;

            public:
                slider(const std::shared_ptr <sf::RenderWindow>);

                void render();
                void update();
            };
            
            class main: public interfaces::renderable, public unit {
            private:
                rendervector var_vector;

            public:
                main(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
            };

            class core: public interfaces::renderable, public unit {
            private:
                sidebar::main   var_main;
                sidebar::slider var_slider;

            public:
                core(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();

            };
        }
        */



        class sidebar: public interfaces::renderable, public unit {
        private:
            enum {MAIN, SLIDER, COVER};
            enum {USER, NETWORK, SETTINGS, QUIT};
            bool               var_active;
            unsigned int       var_slider_width;
            sf::RectangleShape var_background[3];
            rendervector       var_buttons;
            rendervector       var_buttons_slider;

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
