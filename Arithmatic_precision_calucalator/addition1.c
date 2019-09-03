#include "main.h"

int addition1(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr)
{
	data_t temp, c = 0, c1 = 0;
	int count1 = 0, count2 = 0;
	dlist *temp1 = *tail1;
	dlist *temp2 = *tail2;
	dlist *temp3 = *tailr;

	

	
	while(temp1 && temp2)
	{
		temp = temp1->data + temp2->data + c;

		c = temp / 10000;
		temp = temp % 10000;
		
		//delete_last(headr,tailr);
		
		insert_first(headr, tailr, temp);
			
		temp1 = temp1->prev;
		temp2 = temp2->prev;
	}
	
	if(c != 0)
	{

		insert_first(headr, tailr, c);

	}

}
