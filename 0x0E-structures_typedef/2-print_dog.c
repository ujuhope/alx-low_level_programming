#include <stdio.h>
#include "dog.h"
/**
 * desc:a function that prints a struct dog. If an element of d is NULL, print (* nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.
* return 0:If an element of d is NULL, print (* nil) instead of this element. (i* f name is NULL, print Name: (nil))
* If d is NULL print nothing.
*/

void print_dog(struct dog *d);


#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Prints name, age and owner if not null.
 * @d: is pointer to the struct dog.
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
