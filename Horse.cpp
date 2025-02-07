#include "Horse.h"
#include <iostream>
#include <random>
#include <cstdlib>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);


Horse::Horse(){
	Horse::position = 0;
	Horse::id = 0;
	Horse::trackLength = 15;
}

void Horse::init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int coin = dist(rd);
	if(coin == 1){
		Horse::position ++;
	}
}

void Horse::printLane(){
	for(int i = 0; i < Horse::trackLength; i++){
		if(i == Horse::position){
			std::cout << Horse::id;
		}else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	if(Horse::position >= trackLength){
		std::cout << "Horse " << Horse::id << " wins!" << std::endl;
		return true;
	}else{
		return false;
	}
}
