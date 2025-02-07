horseRace: Horse.o Race.o Main.o
	g++ Horse.o Race.o main.o -o horseRace


Horse.o: Horse.h Horse.cpp
	g++ -c Horse.cpp

Race.o: Horse.h Race.h Race.cpp
	g++ -c Race.cpp

Main.o: Horse.h Race.h main.cpp
	g++ -c -g main.cpp

run: horseRace
	./horseRace

clean:
	rm horseRace
	rm *.o

