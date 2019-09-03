#include "main.h"

int convert(char ch)
{
	int value;

	if(ch >= 'A' && ch <= 'Z')
	{
		value = ch - 'A';
		return value;
	}

	value = ch - 'a';
	return value;
}
