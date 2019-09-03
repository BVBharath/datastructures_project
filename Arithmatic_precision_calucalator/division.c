#include "main.h"

int division(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr)
{
	dlist *temp1 = *tail1;
	dlist *temp2 = *tail2;


	insert_first(headr, tailr, 0);
	unsigned int count = 0, i, result=0, flag = 0;


	while(temp1 != NULL)
	{

		result = temp1->data - temp2->data;
		count++;
		while(result >= temp2->data)
		{
			result = result - (temp2->data);

			count++;


		}

		if(flag)
		{
			count = count * 10000;
		}

		(*tailr)->data = (*tailr)->data + count;
		count = 0;
		temp1 = temp1->prev;
		flag = 1;
	}
}
