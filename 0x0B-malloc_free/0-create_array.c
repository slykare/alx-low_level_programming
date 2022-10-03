#include "main.h"
#include <stdlib.h>

/**
  * create_array - its creates array of chars & initiates it with specific char.
  * @size: the size of array
  * @c: character to initialize the array.
  * Return:pointer to the array or NULL if it fails.
  */
char *create_array(unsigned int size,char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}


