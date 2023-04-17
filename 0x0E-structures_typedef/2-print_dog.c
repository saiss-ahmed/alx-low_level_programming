#include "dog.h"
/**
  *print_dog -  a function that prints a struct dog
  *@d: the pointer to dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
