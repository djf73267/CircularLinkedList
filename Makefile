LFLAG= -Wall
CFLAGS= -Wall -std=c++14 -g -O0 -pedantic-errors


main: main.cpp CircularLinkedList.o ItemType.o
	g++ $(LFLAG) -o main main.cpp CircularLinkedList.o ItemType.o -g
run: main.cpp CircularLinkedList.o ItemType.o
	g++ -std=c++14 -g -o run main.cpp CircularLinkedList.o ItemType.o -g

CircularLinkedList.o: CircularLinkedList.cpp CircularLinkedList.h
	g++ $(CFLAGS) -c CircularLinkedList.cpp

ItemType.o: ItemType.cpp ItemType.h
	g++ $(CFLAGS) -c ItemType.cpp

clean:
	rm *.o main