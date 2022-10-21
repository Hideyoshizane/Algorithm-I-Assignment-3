tp01: main.o functions.o
	g++ main.o functions.o -o tp03

main.o: main.cpp
	g++ -c main.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	rm *.o tp03
