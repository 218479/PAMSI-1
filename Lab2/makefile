CXX=-Iinc -Wall -pedantic

all: prog

prog: obj/main.o obj/Tablica_dynamiczna.o
	g++ -Iinc -Wall -pedantic -o program obj/main.o obj/Tablica_dynamiczna.o

obj/main.o: src/main.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/main.o src/main.cpp

obj/Tablica_dynamiczna.o: src/Tablica_dynamiczna.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/Tablica_dynamiczna.o src/Tablica_dynamiczna.cpp 
clean:
	rm -f obj/*.o
