//***************************************
// Random.h
//
// by: Jesse Yetter
//***************************************

#ifndef RANDOM_H
#define RANDOM_H

class Random
{
	public:
		Random();

		int roll();

		int roll(int dice);

		int roll(int dice, int mod);

		int getResult();

	private: 
	int myResult;
};

#endif