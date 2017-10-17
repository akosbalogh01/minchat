#!/bin/bash
echo "Compiling chat client..."

g++ -std=c++14 -Wall    -c sources/main.cpp             	-o objects/main.o
g++ -std=c++14 -Wall    -c sources/logic.cpp            	-o objects/logic.o
g++ -std=c++14 -Wall    -c sources/trigger.cpp                  -o objects/trigger.o
g++ -std=c++14 -Wall    -c sources/processevent.cpp     	-o objects/processevents.o
g++ -std=c++14 -Wall    -c sources/user.cpp             	-o objects/user.o
g++ -std=c++14 -Wall    -c sources/cursor.cpp           	-o objects/cursor.o
g++ -std=c++14 -Wall    -c sources/textbox.cpp          	-o objects/textbox.o
g++ -std=c++14 -Wall    -c sources/textarea.cpp                 -o objects/textarea.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/sidebar/constructor.cpp     -o objects/gfx_sidebar_constructor.o
g++ -std=c++14 -Wall    -I headers/     -c sources/graphics/sidebar/render.cpp          -o objects/gfx_sidebar_render.o
g++ -std=c++14 -Wall    -c sources/tabsbar.cpp                  -o objects/tabsbar.o
g++ -std=c++14 -Wall    -c sources/graphics.cpp         	-o objects/graphics.o
g++ -std=c++14 -Wall    -c sources/rendervector.cpp     	-o objects/rendervector.o
g++ -std=c++14 -Wall	-c sources/rendervectors_init.cpp	-o objects/rendervectors_init.o
g++ -std=c++14 -Wall    -c sources/ini/inifile.cpp      	-o objects/inifile.o
g++ -std=c++14 -Wall    -c sources/ini/key.cpp          	-o objects/inikey.o
g++ -std=c++14 -Wall    -c sources/ini/load.cpp         	-o objects/iniload.o
g++ -std=c++14 -Wall    -c sources/ini/save.cpp         	-o objects/inisave.o
g++ -std=c++14 -Wall    -c sources/ini/section.cpp      	-o objects/inisection.o
g++ -std=c++14 -Wall    -c sources/ini/value.cpp        	-o objects/inivalue.o
g++ objects/* -o release/chatclient -lsfml-audio -lsfml-network -lsfml-graphics -lsfml-window -lsfml-system
