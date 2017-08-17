#ifndef CHAT_GFX_CORE
#define CHAT_GFX_CORE
#include <vector>
#include <memory>
#include "interfaces.hpp"
#include "rendervector.hpp"

namespace chat {
    namespace graphics {
	class core: public unit, public interfaces::updateable {
        public:
            typedef enum {MAIN = 0} rendervector_type;

        private:
            std::vector <chat::graphics::rendervector> var_renderlist;
            rendervector_type var_selected_renderlist_index;
            void init_render_vectors();

        public:
            core();

            const std::shared_ptr <sf::RenderWindow>& renderTarget() const;

            void render();
            void update();
            void setRenderVectorTo(const rendervector_type);

            const sf::Vector2f& windowSize() const;
        };
    }
}

#endif
