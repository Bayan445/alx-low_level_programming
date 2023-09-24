#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that should create arr with chars
 *
 *
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 *
 */


char *create_array(unsigned int size, char c)
{
	char *mb;
	unsigned int i;

	mb = malloc(sizeof(char) * size);
	if (size == 0 || mb == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mb[i] = c;
	}
	return (mb);

}
