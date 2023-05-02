#include "lists.h"

/**
 *reverse_listint - a function that reverses a sigly linked list
 *@head: the node
 *Return: a reversed sigly linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *c = *head;

	while (c != NULL)
	{
		*head = (*head)->next;
		c->next = p;
		p = crnt;
		c = *head;
	}
	*head = p;
	return (*head);
}
