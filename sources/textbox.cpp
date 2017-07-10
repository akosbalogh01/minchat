#include <string>
#include "../headers/textbox.hpp"

void chat::graphics::textbox::render() {
    //do stuff
}

unsigned chat::graphics::textbox::position(textbox::pos_type type) {
    switch (type) {
        case textbox::TOP:    return var_textbox_properties[TOP];
        case textbox::BOTTOM: return var_textbox_properties[BOTTOM];
        case textbox::LEFT:   return var_textbox_properties[LEFT];
        case textbox::RIGHT:  return var_textbox_properties[RIGHT];
    }

    return -1;
}
