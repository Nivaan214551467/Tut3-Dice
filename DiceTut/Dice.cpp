#include "Dice.h"
#include <stdlib.h>
#include <cstdlib>
#include <ctime>


Dice::Dice()
{
}

int Dice::roll()
{
	srand(time(NULL));
	return rand() % 6 + 1;
}

float Dice::average(Dice x, int number)
{
	float total = 0;
	for (int i = 0; i < number; i++)
	{
		total += x.roll();
	}
	return float(total / number);
}

float Dice::average(int arr[], int number)
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
