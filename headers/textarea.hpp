#ifndef CHAT_GFX_TEXTAREA
#define CHAT_GFX_TEXTAREA
#include <memory>
#include <list>
#include <string>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class textarea: public interfaces::renderable, public unit{
        private:
            sf::RectangleShape var_background;
            std::vector <std::shared_ptr <sf::Text>> var_textvector;
            std::list <std::string> var_textlist;
            void add_text(const std::string&);

        public:
            textarea(const std::shared_ptr <sf::RenderWindow>&);

            void render();
            void update();
        };
    }
}

#endif
