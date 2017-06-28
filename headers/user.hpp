#ifndef CHAT_USER
#define CHAT_USER
#include <string>
#include <iostream>

typedef const std::string& str;

namespace chat {
    class user {
    private:
        const std::string var_userid;
        const std::string var_username;
        const std::string var_realname;
        const std::string var_email;
        bool  var_public;
        bool  var_away;

    public:
        user(str userid, str username, str realname, str email, bool is_public):
        var_userid(userid), var_username(username), var_realname(realname), var_email(email), var_public(is_public) {
            var_away = false;
            std::cout << "[LOG] Initialized user: " << *this << std::endl;
        }

        const std::string& userName() const;
        const std::string& realName() const;
        const std::string& userID() const;
        const std::string& email() const;
        const bool isPublic() const;
        const bool isAway() const;

        void setPublic(bool);
        void setAway(bool);

        friend std::ostream& operator << (std::ostream&, const user&);
    };

    std::ostream& operator << (std::ostream&, const user&);
}

#endif
