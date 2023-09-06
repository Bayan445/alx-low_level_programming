#include "main.h"

/**
 * swap_int - a function that swaps 2 values
 * @a:a pointer name.
 * @b:a pointr too.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
