#include "main.h"
/**
 *create_array - creates an array of chars, and fill it with a specific char
 *@size: size of the array
 *@c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	arr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (arr == NULL)
	{
		return ('\0');
	}
	return (arr);
}
