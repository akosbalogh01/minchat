#ifndef CHAT_GFX_CORE
#define CHAT_GFX_CORE
#include "interfaces.hpp"

namespace chat {
	namespace graphics {
		class core: public unit {
		private:
			
		public:
			core();
                        const std::shared_ptr <sf::RenderWindow> renderTarget() const;
		};
	}
}

#endif
