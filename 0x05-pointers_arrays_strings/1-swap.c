#include "main.h"

/**
 * swap_int - function that swaps two values
 *
 * @a: the first value to be swapped
 *
 * @b: the secconed vale to be swapped
 */

void swap_int(int *a, int *b)
{

	int Box = *a;
	*a = *b;
	*b  = Box;
}
