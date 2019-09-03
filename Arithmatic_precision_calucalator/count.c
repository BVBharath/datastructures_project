#include "main.h"

int count(dlist **head, dlist **tail)
{
	int n = 0;
	dlist *temp = *head;

	while(temp)
	{
		temp = (temp)->next;
		n++;
	}
//	printf("%d\n", n);	
	return n;
}
