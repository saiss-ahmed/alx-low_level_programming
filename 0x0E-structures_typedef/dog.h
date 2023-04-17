#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  *struct dog - structure of a dog
  *@name: name of the dog
  *@age: his age
  *@owner: his owner
  */
struct dog
{
	char *name;
	char *owner;
	float age;

};
#endif /*DOG_h*/
