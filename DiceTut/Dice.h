#pragma once
class Dice
{
private:
	int roll_num;		//stores the number of a dice when rolled
public:
	Dice(int);
	Dice roll();
	~Dice();
};

