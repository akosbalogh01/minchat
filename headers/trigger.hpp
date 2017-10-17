#ifndef CHAT_LOGIC_TRIGGER
#define CHAT_LOGIC_TRIGGER
#include <functional>
#include "SFML/Graphics.hpp" //sf::Event
#include "interfaces.hpp"

namespace chat {
    namespace logic {
        class trigger: public interfaces::triggerable {
        private:
            const sf::Event::EventType var_type;
            const std::function <bool (const sf::Event&)> var_interpreter;
            const std::function <void ()>                 var_target;

        public:
            trigger(const sf::Event::EventType& type, const std::function <bool (const sf::Event&)>& interpreter, const std::function <void ()>& target):
                var_type(type), var_interpreter(interpreter), var_target(target) {}
            
            const bool interpret(const sf::Event&);
            void execute();
        };
    }
}

#endif
