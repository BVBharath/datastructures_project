#include "main.h"

void search(slist *head, data_t *string)
{
	slist *temp = head;
	slist_file_table *temp1;

	while(temp)
	{
		if(strcmp(temp->word, string) == 0)
		{
			temp1 = temp->file_table;
			printf("\nstring : %s present %d files\n", temp->word, temp->file_count);
			while(temp1)
			{
				printf("FILE:  present %d time in %s file\n", temp1->word_count, temp1->file_name);
				temp1 = temp1->tab_link;

			}
			putchar('\n');
			return;

		}



		temp = temp->link;

	}

	printf("string not found in database\n");

}
