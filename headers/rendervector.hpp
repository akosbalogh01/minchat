#ifndef CHAT_GFX_RENDERVECTOR
#define CHAT_GFX_RENDERVECTOR
#include <vector>
#include <memory>
#include "SFML/Graphics.hpp"
#include "interfaces.hpp"

namespace chat {
    namespace graphics {
        class rendervector: public interfaces::renderable, public unit {
        private:
            std::vector <std::shared_ptr <interfaces::renderable>>  var_vector;
            std::vector <std::shared_ptr <interfaces::triggerable>> var_triggers;

        public:
            rendervector(const std::shared_ptr <sf::RenderWindow>&);

            void add(std::shared_ptr <interfaces::renderable>&);
            void add(std::shared_ptr <interfaces::triggerable>&);
            void render();
            void update();
            void processTrigger(const sf::Event&);
        };
    }
}

#endif
