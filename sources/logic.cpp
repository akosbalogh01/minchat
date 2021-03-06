#include <string>
#include <memory>
#include "SFML/Graphics.hpp" //sf::Event
#include "../headers/interfaces.hpp"
#include "../headers/logic.hpp"
#include "../headers/user.hpp"

void chat::logic::core::loadSettings(const std::string& filepath) {
    var_settings.load(filepath);
    
    std::string userid   = var_settings.value("User", "userid");
    std::string username = var_settings.value("User", "username");
    std::string realname = var_settings.value("User", "realname");
    std::string email    = var_settings.value("User", "email");
    bool ispublic        = (var_settings.value("User", "email") == "true");

    var_user     = std::make_unique <chat::user> (userid, username, realname, email, ispublic);
    var_event    = std::make_shared <sf::Event> ();
    var_running  = true;
}

void chat::logic::core::setRenderTarget(const std::shared_ptr <chat::graphics::core>& param) {
    var_graphics = param;
}

void chat::logic::core::setRunning(const bool param) {
    var_running = param;
}

bool chat::logic::core::isRunning() const {
    return var_running;
}
