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

	unsigned int len1;
	unsigned int len2;
	char *arr;

	if (s1 == NULL)
	{
		s1 = (char *) malloc(1);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *) malloc(1);
		s2[0] = '\0';
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	arr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	return (concatinator(arr, s1, len1, s2, len2, n));
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
/**
  *concatinator -a function conact two strings that has other paramethers
  *@arr: the array that would concat everything
  *@s1: the first string
  *@s2: the second string
  *@len1: the length for s1
  *@len2: length for s2
  *@n: look for the main functio to know
  *Return: always an array
  */
char *concatinator(char *arr, char *s1, int len1, char *s2, int len2, int n)
{
	int i = 0, j = 0;

	for (; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	if (n < len2)
	{
		for (; j < n; j++)
		{
			arr[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (; j < len2; j++)
		{
			arr[i] = s2[j];
			i++;
		}
	}
	arr[i] = '\0';
	return (arr);
}
