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

	int s, i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s <= i; s++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

