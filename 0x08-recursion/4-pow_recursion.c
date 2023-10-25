#include "main.h"

/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y
 *
 * @x: the bse number
 * @y: the power number
 *
 * Return: it returns 1 and -1 and the desired value
 */

int _pow_recursion(int x, int y)
{
	/*the base case*/
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	else
		return (x *  _pow_recursion(x, y - 1));
}
