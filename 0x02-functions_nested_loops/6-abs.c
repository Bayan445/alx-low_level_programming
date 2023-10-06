#include "main.h"

/**
 * int _abs - a function that computes the absolute value of an integer.
 *
 * @n: a number to have absolute value.
 *
 * Return: 0 and n and K.
 */
int _abs(int n)
{
	int K = -n;

	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else

		return (K);
}
