#include<iostream>
#include "Random.h"

int main(){

	Random die;
	for (int i = 0; i < 10;i++)
		std::cout << die.roll()<< std::endl;

	return 0;
}