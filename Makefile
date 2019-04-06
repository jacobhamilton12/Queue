all: main

main: main.cpp MinQueue.h 
	g++ -std=c++11 main.cpp -o run-tdll

clean:
	rm *.o *.gch main