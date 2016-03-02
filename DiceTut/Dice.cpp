#include "Dice.h"
#include <stdlib.h>

Dice::Dice(int result = 1)
{
	roll_num = result;
}

Dice Dice::roll()
{
	return rand() % 5 + 1;
}

Dice::~Dice()
{
}
