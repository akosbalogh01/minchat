#ifndef CHAT_LOGIC_CONSTS
#define CHAT_LOGIC_CONSTS
#include <string>
#include "SFML/Graphics.hpp"

namespace chat {
    namespace logic {
        const std::string  windowname = "Chat client";
        const unsigned int framelimit = 60;
    }

    namespace graphics {
        namespace color {
            const sf::Color background(128, 128, 128);
            const sf::Color buttons(192, 192, 192);
            const sf::Color text(0, 0, 0);
            const sf::Color sidebar();
            const sf::Color slider();
            const sf::Color cover();
            const sf::Color textbox();
            const sf::Color textarea();
            const sf::Color tabsbar();
        }

        namespace distance {
            namespace textarea {
                const unsigned int top    = 50;
                const unsigned int left   = 65;
                const unsigned int bottom = 80;
                const unsigned int right  = 15;
            }

            namespace textbox {
                const unsigned int textarea = 15;
                const unsigned int left   	= 65;
                const unsigned int bottom 	= 15;
                const unsigned int right  	= 15;
            }

            namespace sidebar {
                const unsigned int left		= 0;
                const unsigned int top		= 0;
                const unsigned int textarea = 15;
                namespace buttons {
                    namespace quit {
                        const unsigned int left   = 0;
                        const unsigned int bottom = 15;
                    }
                }
            }

            namespace tabsbar {
                const unsigned int left 	= 65;
                const unsigned int top		= 15;
                const unsigned int right	= 15;
                const unsigned int textarea = 30;
            }
        }

        namespace size {
            namespace slider {
                const unsigned int width        = 200;
            }

            namespace sidebar {
                namespace buttons {
                    namespace quit {
                        const unsigned int height = 50;
                        const unsigned int width  = 50;
                    }

                    namespace slider {
                        const unsigned int height = 50;
                        const unsigned int width  = 200;
                    }
                }
            }

            namespace window {
                const unsigned int width        = 1024;
                const unsigned int height       = 768;
            }
        }
    }
}

#endif
