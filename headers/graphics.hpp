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
            const std::vector <std::unique_ptr <interfaces::renderable>>& renderList();
            void render();
            const sf::Vector2f& windowSize() const;
        };
    }
}

#endif
