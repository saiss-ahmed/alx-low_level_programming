#include "main.h"
/**
 *print_number - a function that prints a number using only _putchar
 *@n: the number we wants to print
 */
void print_number(int n)
{
int div = 1;
int digit = 0;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (div <= n / 10)
{
div *= 10;
}
while (div > 0)
{
digit = n / div;
_putchar(digit + '0');
n %= div;
div /= 10;
}
}

