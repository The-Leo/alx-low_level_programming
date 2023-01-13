#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Program that allocates an array of nmemb elements of size bytes
 * @nmemb: Number of array elements
 * @size: Size of each element, in bytes
 * Return: pointer to first index of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
