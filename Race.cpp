#include "Race.h"
#include "Horse.h"
#include <iostream>


Race::Race(){
	for(int i = 0;i<5;i++){
		Race::horses[i].init(i, 15);
	}
}
void Race::run(){
	bool keepGoing = true;

	while(keepGoing){
		for(int i = 0; i < 5; i ++){
			horses[i].advance();
			horses[i].printLane();
			if(horses[i].isWinner()){
				keepGoing = false;
			}
		}

		std::cout << "Enter for another turn: ";
		std::cin.get();
	}
}
