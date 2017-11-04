#ifndef CHAT_GFX_SIDEBAR_SLIDER
#define CHAT_GFX_SIDEBAR_SLIDER
#include <memory>
#include "../interfaces.hpp"
#include "../rendervector.hpp"

namespace chat {
    namespace graphics {
        namespace sidebar {
            class slider: public interfaces::renderable, public unit {
            private:
                typedef enum {ACTIVE = 1, INACTIVE = -1} status;
                status              var_slider_active;
                int                 var_slider_pos;
                rendervector        var_vector;

            public:
                slider(const std::shared_ptr <sf::RenderWindow>&);

                void render();
                void update();
                void toggle();
            };
        }
    }
}

#endif
