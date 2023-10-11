#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *	should be printed
 *
 *
*/

void print_diagonal(int n)
{
	int Br, op;

	for (Br = 0; Br < n; Br++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else 
		{
			for (op = 1; op <= n; op++)
			{
				_putchar(' ');
				_putchar('\\');
			}
		}
	}
		_putchar('\n');
}
