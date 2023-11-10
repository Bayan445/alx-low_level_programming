#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list MyNums;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(MyNums, n);

	for (i = 0; i < n; i++)
		add = add + va_arg(MyNums, int);

	va_end(MyNums);

	return (add);
}
