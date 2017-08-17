#ifndef CHAT_GFX_TEXTBOX
#define CHAT_GFX_TEXTBOX
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "../headers/interfaces.hpp"

namespace chat {
    namespace graphics {
        class textbox: public interfaces::renderable, public unit {
            private:
                sf::RectangleShape var_background;

                unsigned    var_cursor_pos;
                std::string var_cursor_front;
                std::string var_cursor_back;

            public:
                textbox(const std::shared_ptr <sf::RenderWindow>&);

                void update();
                void render();
        };
    }
}

#endif
