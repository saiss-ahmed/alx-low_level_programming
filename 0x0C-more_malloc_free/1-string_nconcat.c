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

	unsigned int len1, len2, i = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1  = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	arr = (char *) malloc((len1 + n + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i < len1 + n; i++)
	{
		if (i < len1)
		{
			arr[i] = s1[i];
		}
		else
		{
			arr[i] = s2[i - len1];
		}
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

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
