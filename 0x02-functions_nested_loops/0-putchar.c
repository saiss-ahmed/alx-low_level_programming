#include <unistd.h>
#include <string.h>
int print(char *array, int length);
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	print("_putchar \n", strlen("_putchar \n"));
	return (0);
}
/**
 * print - writes the array of chars to the stdout
 *@array: the string to print
 *@length: the length of the array defined by the function "strlen"
 * Return: on success 1.
 */
int print(char *array, int length)
{
	return (write(1, &array[0], length));
}
