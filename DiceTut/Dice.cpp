#include "Dice.h"
#include <cstdlib>
#include <ctime>

Dice::Dice()		//default constructor
{
}

int Dice::roll()		//This function generates a random number from 1-6 and returns the value
{
	srand(time(NULL));
	return rand() % 6 + 1;
}

float Dice::average(Dice x, int number)	//works out the average of dice rolls
{
	
	float total = 0;
	for (int i = 0; i < number; i++)
	{
		total += x.roll();
	}
	return float(total / number);
}

float Dice::average(int arr[], int number)	//works out the average from an array of integers
{
	float total = 0;
	for (int i = 0; i < number; i++)
	{
		total += arr[i];
	}
	return float(total/number);
}

Dice::~Dice()
{
}
