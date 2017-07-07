#include <string>
#include <SFML/Graphics.hpp>
#include "../headers/interfaces.hpp"

namespace chat {
    namespace graphics {
        class textbox: public interfaces::renderable {
            private:
                unsigned    var_cursor_pos;
                std::string var_cursor_front;
                std::string var_cursor_back;

            public:
                textbox();

                void render();
                const std::string& text() const;
        }; 
    }
}
