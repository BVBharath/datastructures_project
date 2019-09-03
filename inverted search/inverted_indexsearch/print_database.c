#include "main.h"

void print_database(slist *head)
{
	slist *temp = head;
	


		slist_file_table  *temp1;
	while(temp)
	{
		printf("word : %s present in %d files\n", temp->word, temp->file_count);

		temp1 = temp->file_table;

		while(temp1)
		{
			printf("FILE:  present %d times in the file %s\n", temp1->word_count, temp1->file_name);

			temp1 = temp1->tab_link;
		}

		putchar('\n');

		temp = temp->link;
	}
}
