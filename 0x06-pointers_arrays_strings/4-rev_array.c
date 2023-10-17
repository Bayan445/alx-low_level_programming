#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int eb, r, box;

	r = n - 1;

	for (eb = 0; eb < r; eb++)
	{

		box = a[eb];
		a[eb] = a[r];
		a[r] = box;
	}

}
