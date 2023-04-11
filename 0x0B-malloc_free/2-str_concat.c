#include "main.h"
/**
  *str_concat -  a function that concatenates two strings.
  *@s1: the first string
  *@s2: the second string
  *Return: either the concatinated string or NULL
  */

char *str_concat(char *s1, char *s2)
{
	int num1 = 0, num2 = 0;
	int i = 0, j = 0;
	char *arr;

	while (s1[num1] != '\0')
	{
		num1++;
	}
	while (s2[num2] != '\0')
	{
		num2++;
	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	arr = (char *) malloc((num1 + num2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < num1)
	{
		arr[i] = s1[i];
		i++;
	}
	while (j < num2)
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	return (arr);
}
