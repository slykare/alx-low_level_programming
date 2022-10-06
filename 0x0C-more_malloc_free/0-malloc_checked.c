#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: an unsigned input integer.
 * Return: a pointer to allocated memory or NULL if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);

	return (d);
}
