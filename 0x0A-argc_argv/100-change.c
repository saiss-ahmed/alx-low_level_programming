#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - entry point
  *@argc: the length
  *@argv:the string
  *Return: either 0 or 1
  */
int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	count = coin_counter(num);
	printf("%i\n", count);
	return (0);
}
/**
  *coin_counter - a function that counts the minimum amount of counts you need
  *@num: the number we are trying to find it count replacement
  *Return: always counter
  */
int coin_counter(int num)
{
	int i;
	int count = 0;

	if (num >= 25)
	{
		for (; num >= 25; num -= 25)
		{
			count++;
		}
	}
	if (num >= 10)
	{
		for (; num >= 10; num -= 10)
		{
			count++;
		}
	}
	if (num >= 5)
	{
		for (; num >= 5 ; num -= 5)
		{
			count++;
		}
	}
	if (num < 5)
	{
		for (i = 1; i < num; i++)
		{
			count++;
		}
	}
	return (count);
}
