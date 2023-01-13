#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Creates an array based on passed in value
 * @b: Value passed in for array creation
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
