#include "main.h"

int multiplication(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr)
{
	dlist *temp1 = *tail1;
	dlist *temp2 = *tail2;
	unsigned int c = 0, i, var;
	int pos=0;

	dlist *head = NULL;
	dlist *tail =NULL;

	while(temp2 != NULL)
	{
				for(i = 0; i < pos; i++)
				{
				//head->data  = c;

				//call insert last fun and pass 0
		insert_first(&head, &tail, 0);
				}

		while(temp1 != NULL)
		{

			var = ((temp1->data) * (temp2->data)) + c;

			c =  var / 10000;

		
			var = var % 10000;

			insert_first(&head, &tail, var);
			temp1 = temp1->prev;
		}
		if(c != 0)
		{
		insert_first(&head, &tail, c);
		}
		if(*headr == NULL)
		{
			insert_first(headr, tailr, 0);
		}

		compare_links(&head, &tail, headr, tailr);
		

		addition(&head,  &tail, headr, tailr, headr, tailr);
		head = NULL;
		tail = NULL;
		temp1 = *tail1;
		temp2 = temp2->prev;
		pos++;
		c = 0;
	}
}
