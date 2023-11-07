#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct declared for dog d
 *
 * @d: the new dog of type struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
	}
	}
