#ifndef CHAT_GFX_SIDEBAR_MAIN
#define CHAT_GFX_SIDEBAR_MAIN
#include <memory>
#include "../interfaces.hpp"
#include "../rendervector.hpp"

namespace chat {
    namespace graphics {
        namespace sidebar {
            class main: public interfaces::renderable, public unit {
            private:
                rendervector var_vector;

            public:
                main(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
            };
        }
    }
}

#endif
