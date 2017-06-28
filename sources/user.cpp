#include "../headers/user.hpp"
#include <iostream>
#include <string>

const std::string& chat::user::userName() const {
    return var_username;
}

const std::string& chat::user::realName() const {
    return var_realname;
}

const std::string& chat::user::userID() const {
    return var_userid;
}

const std::string& chat::user::email() const {
    return var_email;
}

const bool chat::user::isPublic() const {
    return var_public;
}

const bool chat::user::isAway() const {
    return var_away;
}

void chat::user::setPublic(bool param) {
    var_public = param;
}

void chat::user::setAway(bool param) {
    var_away = param;
}

std::ostream& chat::operator << (std::ostream& output_stream, const chat::user& param) {
    output_stream << param.var_username << " [" << param.var_userid << "], " << param.var_realname << ", " << param.var_email;
    return output_stream;
}
