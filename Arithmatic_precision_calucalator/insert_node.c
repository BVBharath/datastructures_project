#include "main.h"

int insert_node(dlist **head, dlist **tail, unsigned long num)
{
	unsigned int temp;
	while(num)
	{
		temp = (num % 10000);

		temp = temp % 10000;
		insert_first(head, tail, temp);
		
		num = num / 10000;
		
	}
}
