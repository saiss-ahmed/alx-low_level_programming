#include "main.h"
/**
  *_strdup - a function that copy a string
  *@str: the string we trying to copy
  *Return: either a pointer to a string or NULL
  */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	arr = (char *) malloc((i + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (j < i + 1)
	{
		arr[j] = str[j];
		j++;
	}
	return (arr);
}
