#include "main.h"
/**
 *print_number - a function that prints a number using only _putchar
 *@n: the number we wants to print
 */
void print_number(int n)
{
int divisor = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (divisor <= n / 10)
divisor *= 10;

while (divisor > 0)
{
_putchar((n / divisor) % 10 + '0');
divisor /= 10;
}

}
