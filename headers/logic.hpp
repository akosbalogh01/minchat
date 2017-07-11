#include <memory>
#include <string>
#include "ini/inifile.hpp"
#include "user.hpp"

namespace chat {
    namespace logic {
        class logic {
        private:
            ini::inifile                 var_settings;
            std::unique_ptr <chat::user> var_user;

        public:
            void loadSettings(const std::string&);
        };
    }
}
