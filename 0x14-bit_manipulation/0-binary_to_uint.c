#include "main.h"
#include <stddef.h>
/**
  *binary_to_uint - a function convert from binary to dec
  *@b: the number we are converting
  *Return: unsigned intiger or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			num = num * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
