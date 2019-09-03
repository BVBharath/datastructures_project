#include "main.h"

void save_database(slist *head, char *file_name2)
{


	FILE *fp1 = fopen(file_name2, "a");

	if(!fp1)
	{
		printf("file is not open\n");
		return;
	}
	slist *temp = head;



	slist_file_table  *temp1;
	while(temp)
	{
		fprintf(fp1,"word : %s present in %d files\n", temp->word, temp->file_count);

		temp1 = temp->file_table;

		while(temp1)
		{
			fprintf(fp1,"FILE:  present %d times in the file %s\n", temp1->word_count, temp1->file_name);

			temp1 = temp1->tab_link;
		}

		temp = temp->link;
	}

	fclose(fp1);
}
