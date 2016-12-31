//**********************************
// Random.cpp
//
// by: Jesse Yetter
//**********************************

#include "Random.h"
#include<ctime>
#include<random>

Random::Random(){
	myResult = 0;
	std::srand(std::time(0));
}

int Random::getResult(){
	return myResult;
}

int Random::roll(){
	myResult = (std::rand() % 6) + (std::rand() % 6) + (std::rand() % 6) + 3;

	return myResult;
}

int Random::roll(int dice){
	myResult = 0;
	for (int i = 0; i < dice; i++)
		myResult += (std::rand() % 6) + 1;
	return myResult;
}

int Random::roll(int dice, int mod){
	myResult = 0;
	for (int i = 0; i < dice; i++)
		myResult += (std::rand() % 6) + 1;
	myResult += mod;
	return myResult;
}

