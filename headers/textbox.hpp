#ifndef CHAT_GFX_TEXTBOX
#define CHAT_GFX_TEXTBOX
#include <string>
#include <SFML/Graphics.hpp>
#include "../headers/interfaces.hpp"

namespace chat {
    namespace graphics {
        class textbox: public interfaces::renderable {
            private:
                unsigned    var_textbox_properties[6];
                
                unsigned    var_cursor_pos;
                std::string var_cursor_front;
                std::string var_cursor_back;

            public:
                typedef enum {TOP = 0, BOTTOM = 1, LEFT = 2, RIGHT = 3} pos_type;
                typedef enum {HEIGHT = 4, WIDTH = 5} size_type;

                textbox();

                unsigned position(textbox::pos_type);
                unsigned size(textbox::size_type);

                void render();
        }; 
    }
}

#endif