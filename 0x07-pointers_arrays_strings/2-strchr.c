#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: main string
 *@c: character to be exaamened
 *Return: returns
 */

char *_strchr(char *s, char c)
{
char *x = s;
while (*x)
{
if (*x == c)
{
return (x);
}
x++;
}
if (!c)
{
return (x);
}
return (0);
}
