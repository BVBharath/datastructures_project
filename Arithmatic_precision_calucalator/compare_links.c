#include "main.h"

int compare_links(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2)
{
	int count1 = count(head1, tail1);
	int count2 = count(head2, tail2);
	int n;
	data_t c1 = 0;

//	printf("link1 : %d  link2 : %d\n", count1, count2);


	if(count1  > count2)
	{
		
		while(count1 != count2)
		{
			insert_first(head2, tail2, 0);
			count2++;
			
		}
		return 2;
	}
	else if(count1 < count2)
	{
		
		while(count1 != count2)
		{
			insert_first(head1, tail1, 0);
			count1++;
			
		}
		return 3;
	
	}
	else
	{
		return 1;
	}
}
