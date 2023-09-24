#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char * mb;
	unsigned int i;

	mb = malloc(sizeof(char) * size);
	if (size == 0 || mb == NULL)
	{
		return (NULL);
	}

	for (i = 0;i < size; i++)
	{
		mb[i] = c;
	}
	return (mb);

}
