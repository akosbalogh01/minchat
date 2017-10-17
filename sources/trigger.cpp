#include "SFML/Graphics.hpp"
#include "../headers/trigger.hpp"

const bool chat::logic::trigger::interpret(const sf::Event& param) {
    return var_interpreter(param);
}

void chat::logic::trigger::execute() {
    var_target(); 
}
