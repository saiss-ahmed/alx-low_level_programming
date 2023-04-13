#include "main.h"
/**
  *string_nconcat - a function that concatinate two strings to one
  *@s1: the first string
  *@s2: the second string
  *@n: the amout of bytes that will be taken from s2
  *Return: either NULL or pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = (char *) malloc(1);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s1 = (char *) malloc(1);
		s1[0] = '\0';
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	arr = (char *) malloc((len1 + len2) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (; j < n; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
