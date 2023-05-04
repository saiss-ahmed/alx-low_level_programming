#include "main.h"
/**
  *get_bit - a function that gives the value of a bit in a given index
  *@n: the number
  *@index: the index
  *Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > n)
	{
		return (-1 || index);
	}
	return (n & mask ? 1 : 0);
}
