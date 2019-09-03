#include "main.h"


int create_database(slist **head, data_t *string, data_t *filename)
{
	if(*head == NULL)
	{
		*head = create_new( string, filename);

		return CREATE_DATABASE;
	}

	slist *temp = *head;
	slist *temp3;

	while(temp)
	{
		if(strcmp(temp->word, string) == 0)
		{

			slist_file_table  *temp1 =  temp->file_table;
			slist_file_table  *temp2;
			while(temp1)
			{
				if(strcmp(temp1->file_name, filename) == 0)
				{
					temp1->word_count++;
					return CREATE_DATABASE;
				}
				temp2 = temp1;
				temp1 = temp1->tab_link;
			}
			temp->file_count++;
			slist_file_table *new_table = malloc(sizeof(slist_file_table));
			new_table->word_count = 1;
			strcpy(new_table->file_name, filename);

			new_table->tab_link = NULL;
			temp2->tab_link = new_table;
			return CREATE_DATABASE;

		}
		temp3 = temp;
		temp = temp->link;

	}
	temp3->link = create_new(string, filename);
	return CREATE_DATABASE;



}
