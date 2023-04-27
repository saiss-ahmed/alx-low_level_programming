#include "lists.h"
#include <stdlib.h>

/**
 *free_list - a function that frees the list
 *@head: element of the list
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
