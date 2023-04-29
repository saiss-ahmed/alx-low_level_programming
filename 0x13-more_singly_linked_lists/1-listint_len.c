#include "lists.h"
/**
  *listint_len - a function returns the number of elements in a linked list
  *@h: the linked list
  *Return: the length
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
