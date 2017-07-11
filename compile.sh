#!/bin/bash
echo "Compiling chat client..."

g++ -std=c++11 -Wall    -c sources/main.cpp             -o objects/main.o
g++ -std=c++11 -Wall    -c sources/logic.cpp            -o objects/logic.o
g++ -std=c++11 -Wall    -c sources/user.cpp             -o objects/user.o
g++ -std=c++11 -Wall    -c sources/cursor.cpp           -o objects/cursor.o
g++ -std=c++11 -Wall    -c sources/textbox.cpp          -o objects/textbox.o

g++ -std=c++11 -Wall    -c sources/ini/inifile.cpp      -o objects/inifile.o
g++ -std=c++11 -Wall    -c sources/ini/key.cpp          -o objects/inikey.o
g++ -std=c++11 -Wall    -c sources/ini/load.cpp         -o objects/iniload.o
g++ -std=c++11 -Wall    -c sources/ini/save.cpp         -o objects/inisave.o
g++ -std=c++11 -Wall    -c sources/ini/section.cpp      -o objects/inisection.o
g++ -std=c++11 -Wall    -c sources/ini/value.cpp        -o objects/inivalue.o
g++ objects/* -o release/project -lsfml-audio -lsfml-network -lsfml-graphics -lsfml-window -lsfml-system