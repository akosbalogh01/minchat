#ifndef CHAT_GFX_CORE
#define CHAT_GFX_CORE
#include <vector>
#include <memory>
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
	class core: public unit {
	private:
            std::vector <std::unique_ptr <interfaces::renderable>> var_renderlist;

	public:
            core();
            const std::shared_ptr <sf::RenderWindow> renderTarget() const;
            void render();
        };
    }
}

#endif
