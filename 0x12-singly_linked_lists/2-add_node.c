#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *len - counts
 *@s: string or smtg
 *Return: counter
 */

int len(const char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
return (counter);
}
/**
 * add_node- adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_cp = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str_cp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_cp;
	new_node->len = len(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


