#include "lists.h"
/**
 * print_listint_safe - prints a linked list of integers
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			return (98);
		}

		current = current->next;
		}

		return (count);
}

