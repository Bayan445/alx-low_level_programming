#include "main.h"

/**
 * _pow_recursion - a power function give power of number
 *
 * @x: adigit to expression
 * @y: a digit wich is the power.
 *
 * Return: pointer to the byte
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
