#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	Dice diceObj;		//creates a Dice object
	
	int arrayOfNum[10];	//creates an array of integers
	srand(time(NULL));	

	for (int i = 0; i <	10; i++)	//populates array with random numbers
	{
		arrayOfNum[i] = rand() % 50 + 1;
	}
	
	cout << "The average of the dice rolls are : " << diceObj.average(diceObj, 7)<<endl;
	cout << "The average of the numbers in the array are : " << diceObj.average(arrayOfNum, 10)<<endl;




}