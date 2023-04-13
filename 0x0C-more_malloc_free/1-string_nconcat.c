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
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i = 0, j = 0;
	char *arr;

	if (n > len2)
	{
		n = len2;
	}
	arr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
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
/**
  *_strlen - a function that find the length of a string
  *@s: the string
  *Return: always an int
  */
int _strlen(char *s)
{
	int i = 0;

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
