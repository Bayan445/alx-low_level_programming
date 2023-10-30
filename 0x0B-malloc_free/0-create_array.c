#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that ceats an array with unknown
 * size in it a constant variable
 *
 * @size: number of times the char will be stored
 *
 * @c: the desired char we choose
 *
 * Return: it returns a pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *poin;

	/*is the size of the character array you want to create*/

	poin = malloc(sizeof(char) * size);
	if (size == 0 || poin == NULL)
		return (NULL);

	for (i  = 0; i < size; i++)
		/**
		 * c parameter is used to determine the initial value that each
		 * element of the created array will be set to
		 */
		poin[i] = c;

	return (poin);
}


