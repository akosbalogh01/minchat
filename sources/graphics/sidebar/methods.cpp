#include "sidebar.hpp"

void chat::graphics::sidebar::setActive(const bool& param) {
    var_active = param;
}

const bool chat::graphics::sidebar::isActive() const {
    return var_active;
}