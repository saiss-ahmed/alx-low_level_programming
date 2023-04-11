#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, height = 0;
	char *arr;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		height += _strlen(av[i]);
	}
	arr = malloc((height + ac + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		arr[k++] = av[i][j];
		}
		arr[k++] = '\n';
	}
	arr[k] = '\0';
	return (arr);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
;
}

return (i);
}
