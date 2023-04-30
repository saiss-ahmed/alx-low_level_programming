#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node’s data (n).
 * @head: pointer to the head
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
