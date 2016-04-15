all: program

program: obj/main.o obj/interface.o obj/kolejka_head.o obj/timer.o obj/element.o obj/Test_tablica.o
	g++ -Iinc -Wall -pedantic -o program obj/main.o obj/interface.o obj/kolejka_head.o obj/timer.o obj/element.o obj/Test_tablica.o -o program

obj/main.o: src/main.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/main.o src/main.cpp 

obj/interface.o: src/interface.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/interface.o src/interface.cpp

obj/kolejka_head.o: src/kolejka_head.cpp 
	g++ -c -Iinc -Wall -pedantic -o obj/kolejka_head.o src/kolejka_head.cpp 

obj/timer.o: src/timer.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/timer.o src/timer.cpp

obj/element.o: src/element.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/element.o src/element.cpp

obj/Test_tablica.o: src/Test_tablica.cpp
	g++ -c -Iinc -Wall -pedantic -o obj/Test_tablica.o src/Test_tablica.cpp



clean:
	rm -f obj/*.o
