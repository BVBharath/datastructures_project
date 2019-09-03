#include "main.h"
int check_filenames(slist *head, char *filename)
{
	slist *temp = head;
	slist_file_table *temp1 ;

	while(temp)
	{
		temp1 = temp->file_table;

		while(temp1)
		{
			if(strcmp(temp1->file_name, filename) == 0)
			{
				return FAILURE; 
			}

			temp1 = temp1->tab_link;
		}

		temp = temp->link;
	}

	return SUCCESS;
}
