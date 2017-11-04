#!/bin/bash
echo "Compiling chat client..."

g++ -std=c++14 -Wall    -I headers/     -c sources/main.cpp     -o objects/main.o
g++ -std=c++14 -Wall    -c sources/logic.cpp            	-o objects/logic.o
g++ -std=c++14 -Wall    -c sources/trigger.cpp                  -o objects/trigger.o
g++ -std=c++14 -Wall    -c sources/processevent.cpp     	-o objects/processevents.o
g++ -std=c++14 -Wall    -c sources/user.cpp             	-o objects/user.o
g++ -std=c++14 -Wall    -c sources/cursor.cpp           	-o objects/cursor.o
g++ -std=c++14 -Wall    -c sources/textarea.cpp                 -o objects/textarea.o
g++ -std=c++14 -Wall    -c sources/tabsbar.cpp                  -o objects/tabsbar.o
g++ -std=c++14 -Wall    -c sources/rendervector.cpp             -o objects/rendervector.o
g++ -std=c++14 -Wall	-I headers/     -c sources/rendervectors_init.cpp       	-o objects/rendervectors_init.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/core/constructor.cpp	-o objects/gfx_core_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/core/methods.cpp		-o objects/gfx_core_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/core/render.cpp		-o objects/gfx_core_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/core/triggers.cpp		-o objects/gfx_core_triggers.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/core/update.cpp		-o objects/gfx_core_update.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/rectangle/constructor.cpp	-o objects/gfx_rectangle_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/rectangle/methods.cpp	-o objects/gfx_rectangle_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/rectangle/render.cpp	-o objects/gfx_rectangle_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/rectangle/update.cpp	-o objects/gfx_rectangle_update.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/text/constructor.cpp	-o objects/gfx_text_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/text/methods.cpp	        -o objects/gfx_text_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/text/render.cpp	        -o objects/gfx_text_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/text/update.cpp	        -o objects/gfx_text_update.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/button/constructor.cpp	-o objects/gfx_button_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/button/methods.cpp		-o objects/gfx_button_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/button/render.cpp           -o objects/gfx_button_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/button/triggers.cpp		-o objects/gfx_button_triggers.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/button/update.cpp		-o objects/gfx_button_update.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/sidebar/constructor.cpp	-o objects/gfx_sidebar_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/sidebar/methods.cpp		-o objects/gfx_sidebar_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/sidebar/render.cpp          -o objects/gfx_sidebar_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/sidebar/triggers.cpp	-o objects/gfx_sidebar_triggers.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/sidebar/update.cpp		-o objects/gfx_sidebar_update.o

g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/textbox/constructor.cpp     -o objects/gfx_textbox_constructor.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/textbox/methods.cpp		-o objects/gfx_textbox_methods.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/textbox/render.cpp          -o objects/gfx_textbox_render.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/textbox/triggers.cpp	-o objects/gfx_textbox_triggers.o
g++ -std=c++14 -Wall    -I headers/	-c sources/graphics/textbox/update.cpp		-o objects/gfx_textbox_update.o

g++ -std=c++14 -Wall    -I headers/	-c sources/ini/inifile.cpp      	-o objects/inifile.o
g++ -std=c++14 -Wall    -I headers/	-c sources/ini/key.cpp          	-o objects/inikey.o
g++ -std=c++14 -Wall    -I headers/	-c sources/ini/load.cpp         	-o objects/iniload.o
g++ -std=c++14 -Wall    -I headers/	-c sources/ini/save.cpp         	-o objects/inisave.o
g++ -std=c++14 -Wall    -I headers/	-c sources/ini/section.cpp      	-o objects/inisection.o
g++ -std=c++14 -Wall    -I headers/	-c sources/ini/value.cpp        	-o objects/inivalue.o
g++ objects/* -o release/chatclient -lsfml-audio -lsfml-network -lsfml-graphics -lsfml-window -lsfml-system
