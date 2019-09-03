#include "main.h"

int delete_last(dlist **head, dlist **tail)
{
	if(*head == NULL )
	{
		return LIST_EMPTY;
	}

	dlist *temp = *tail;
	*tail = temp->prev;
	//(*tail)->next = NULL;
	if((*tail) != NULL )
	{
		(*tail)->next = NULL;
	free(temp);
	return SUCCESS;
	}
	
	if(*tail == NULL)
	{
		*head = NULL;
	}
	return SUCCESS;
}
