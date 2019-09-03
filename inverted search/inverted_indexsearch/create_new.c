#include "main.h"

slist *create_new( data_t *string, data_t *filename)
{

		slist *new_table = malloc(sizeof(slist));
		slist_file_table *filetable = malloc(sizeof(slist_file_table));

		new_table->file_count = 1;
		new_table->link = NULL;
		new_table->word = malloc(sizeof(string));

		strcpy(new_table->word, string);


		new_table->file_table = filetable;

		filetable->word_count = 1;
		strcpy(filetable->file_name, filename);

		filetable->tab_link = NULL;

		return  new_table;



}
