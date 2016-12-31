//**********************************
// Random.cpp
//
// by: Jesse Yetter
//**********************************

#include "Random.h"
#include<ctime>
#include<random>

Random::Random(){
	Random::myResult = 0;
	//std::srand(time);
}

int Random::getResult(){
	return Random::myResult;
}

int Random::roll(){
	Random::myResult = (std::rand() % 6) + (std::rand() % 6) + (std::rand() % 6) + 3;

	return Random::myResult;
}

int Random::roll(int dice){
	Random::myResult = 0;
	for (int i = 0; i < dice; i++)
		Random::myResult += (std::rand() % 6) + 1;
	return Random::myResult;
}

int Random::roll(int dice, int mod){
	Random::myResult = 0;
	for (int i = 0; i < dice; i++)
		Random::myResult += (std::rand() % 6) + 1;
	Random::myResult += mod;
	return Random::myResult;
}

