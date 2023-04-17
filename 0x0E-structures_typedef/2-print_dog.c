#include "dog.h"
/**
  *print_dog -  a function that prints a struct dog
  *@d: the pointer to dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else if (d->age == NULL)
		{
			printf("Age: (nil)");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s", d->name);
			printf("Age: %f", d->age);
			printf("Owner: %d", d->owner);
		}
	}
}
