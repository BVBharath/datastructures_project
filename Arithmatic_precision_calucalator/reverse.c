#include "main.h"


int reverse(int num)
{
	int reverse = 0;

	while(num)
	{
		reverse = (reverse * 10) + (num % 10);
		num = num / 10;
	}

	return reverse;

}
