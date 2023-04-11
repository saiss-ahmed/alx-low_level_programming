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

	while (str[i] != '\0')
	{
		i++;
	}
	arr = (char *) malloc((i) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		arr[j] = str[j];
		j++;
	}
	return (arr);
}
