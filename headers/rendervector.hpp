#ifndef CHAT_GRAPHICS_RENDERVECTOR
#define CHAT_GRAPHICS_RENDERVECTOR
#include <vector>
#include <memory>
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class rendervector: public interfaces::renderable, public unit {
        private:
            std::vector <std::unique_ptr <interfaces::renderable>> var_vector;

        public:
            rendervector(const std::shared_ptr <sf::RenderWindow>&);

            void add(const std::unique_ptr <interfaces::renderable>&);
            void render(); 
        };
    }
}

#endif
