#ifndef CHAT_LOGIC
#define CHAT_LOGIC
#include <memory>
#include <string>
#include "SFML/Graphics.hpp" //sf::Event
#include "ini/inifile.hpp"
#include "interfaces.hpp"
#include "user.hpp"

namespace chat {
    namespace logic {
        class core: public chat::logic::unit, public chat::graphics::unit {
        private:
            ini::inifile                 var_settings;
            std::unique_ptr <chat::user> var_user;
            bool                         var_running;

        public:
            void processEvents();
            void loadSettings(const std::string&);

            bool isRunning() const;
            void setRunning(const bool);
            void setRenderTarget(const std::shared_ptr <sf::RenderWindow>&);
        };
    }
}

#endif
