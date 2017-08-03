#ifndef CHAT_GFX_RENDERVECTOR
#define CHAT_GFX_RENDERVECTOR
#include <vector>
#include <memory>
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class rendervector: public interfaces::renderable, public unit {
        private:
            std::vector <std::shared_ptr <interfaces::renderable>> var_vector;

        public:
            rendervector(const std::shared_ptr <sf::RenderWindow>&);

            void add(std::shared_ptr <interfaces::renderable>&);
            void render();
        };
    }
}

#endif
