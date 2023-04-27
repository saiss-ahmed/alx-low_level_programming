#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function returns the number of elements in a linked list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
	count++;
	h = h->next;
	}

	return (count);
}
