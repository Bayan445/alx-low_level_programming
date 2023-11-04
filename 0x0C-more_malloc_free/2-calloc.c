#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *him;

	if (nmemb == 0 || size == 0)
		return (NULL);

	him = malloc(nmemb * size);
	memset(him, 0, size);

	if (him == NULL)
		return (NULL);

	return (him);
}


