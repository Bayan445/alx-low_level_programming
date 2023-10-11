#include "main.h"

/**
 * print_diagonal - print a straight line
 *
 * @n: is the number of times the _ character
 *	should be printed
 *
 *
*/


void print_diagonal(int n)
{

	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (s = 1; s <= n; s++)
	{
		_putchar(' ');
	}

	_putchar('\\');
	_putchar('\n');

}

