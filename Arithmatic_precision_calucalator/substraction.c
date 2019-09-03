#include "main.h"

int substract(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr, int len1, int len2,int *flag)
{
	dlist **change;
        int temp;
	if(compare(head1,tail1,head2,tail2, len1, len2) == EQUAL)
	{
		insert_first(headr, tailr, 0);
		return 0;
	}

	else if(compare(head1,tail1,head2,tail2, len1, len2) == LESSER)
	{
		change = head1;
		head1 = head2;
		head2 = change;
		change = tail1;
		tail1 = tail2;
		tail2 = change;
		*flag = 1;
	}
    
    while (*tail2)
	{
		if((*tail1)->data < (*tail2)->data)
		{
		temp = (10000 + ((*tail1)->data)) - ((*tail2)->data);
		(*tail1)->prev->data = (*tail1)->prev->data - 1;
		insert_first(headr,tailr, temp);
		}
		else
		{
			temp = (*tail1)->data - (*tail2)->data;
			insert_first(headr,tailr, temp);
		}
		
		*tail1 = (*tail1)->prev;
		*tail2 = (*tail2)->prev;
                 
	}
	while(*tail1)
	{
		temp = (*tail1)->data;
		insert_first(headr, tailr, temp);
                *tail1 = (*tail1)->prev;
	}
	
}
