#ifndef CHAT_LOGIC
#define CHAT_LOGIC
#include <memory>
#include <string>
#include "SFML/Graphics.hpp" //sf::Event
#include "ini/inifile.hpp"
#include "interfaces.hpp"
#include "graphics.hpp"
#include "user.hpp"

namespace chat {
    namespace logic {
        class core: public chat::logic::unit {
        private:
            ini::inifile                           var_settings;
            std::unique_ptr <chat::user>           var_user;
            std::shared_ptr <chat::graphics::core> var_graphics;
            bool                                   var_running;

        public:
            void processEvents();
            void loadSettings(const std::string&);

            bool isRunning() const;
            void setRunning(const bool);
            void setRenderTarget(const std::shared_ptr <chat::graphics::core>&);
        };
    }
}

#endif
