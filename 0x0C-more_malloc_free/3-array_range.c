#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ra;
	int hi, resu;

	if (min > max)
		return (NULL);

	resu = (max - min + 1);
	ra = malloc(sizeof(int) * (max - min + 1));
	if (ra == NULL)
		return (NULL);


	for (hi = 0; hi < resu; hi++)
	{
		ra[hi] = min + hi;
	}

	return (ra);
}
