

g++ -std=c++17 -Wall -I./include -c ./src/fisherPenguin.cpp
g++ -std=c++17 -Wall -I./include -c ./src/builderPenguin.cpp
g++ -std=c++17 -Wall -I./include -c srp.cpp


g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include fisherPenguin.o builderPenguin.o srp.o -o app.exe


DEL .\*.o 


app.exe