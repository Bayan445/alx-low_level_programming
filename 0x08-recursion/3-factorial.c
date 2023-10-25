#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: a numebr we will grt its factorial
 *
 * Return: -1 or 1 or another int value
 */

int factorial(int n)
{

	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (-1);

}
