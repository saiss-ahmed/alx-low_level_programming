#include "lists.h"
/**
 * get_nodeint_at_index - Returns the int node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, start with 0.
 * Return: Pointer to the the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index || current == NULL)
		return (NULL);

	return (current);
}
