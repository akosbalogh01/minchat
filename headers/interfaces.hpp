#ifndef CHAT_INTERFACES
#define CHAT_INTERFACES
#include <memory>
#include "SFML/Graphics.hpp"

namespace interfaces  {
    class updateable {
    public:
        virtual void update() = 0;
    };
    
    class renderable: public updateable {
    public:
        virtual void render() = 0;
    };

    class sendable {
    public:
        virtual void send() = 0;
        virtual void receive() = 0;
    };

    class compressable {
    public:
        virtual void compress() = 0;
        virtual void decompress() = 0;
    };
}

namespace chat {
    namespace graphics {
    	class unit {
	protected:
            std::shared_ptr <sf::RenderWindow> var_rendertarget;	
    	};
    }

    namespace logic {
        class unit {
        protected:
            std::shared_ptr <sf::Event> var_event;
        };
    }
}

#endif
