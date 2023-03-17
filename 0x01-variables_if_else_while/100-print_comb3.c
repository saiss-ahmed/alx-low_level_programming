#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	for (int i = 48; i < 57; i++)
	{
		for (int j = 49 ; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{

				} else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
