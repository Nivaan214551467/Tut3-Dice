#pragma once
class Dice
{

public:
	Dice();
	int roll();
	float average(Dice, int);
	float average(int*, int);
	~Dice();
};

