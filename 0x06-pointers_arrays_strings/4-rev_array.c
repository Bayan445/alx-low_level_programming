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
	int eb, box;

	for (eb = 0; eb < n - 1; eb++)
	{

		box = a[eb];
		a[eb] = a[n];
		a[n] = box;
	}

}
