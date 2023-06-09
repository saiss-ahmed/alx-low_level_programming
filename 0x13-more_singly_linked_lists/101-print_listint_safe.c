#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024] = {NULL};
	int i;

	while (current != NULL)
	{
		for (i = 0; i <= count; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		visited[count] = current;
		count++;
		current = current->next;
	}
	return (count);
}

