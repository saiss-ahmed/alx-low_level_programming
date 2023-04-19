#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i;
	addr *mainAdd;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	mainAdd = (addr *) main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x\n", mainAdd[i]);
			break;
		}
		printf("%02x ", mainAdd[i]);
	}
	return (0);
}
