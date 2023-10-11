#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 *
 */

void print_square(int size)
{
	int tol, ard;

	if (size <= 0)
	{
		_putchar('\n');
	}
	
	else
		for (ard = 0; ard < size; ard++)
		{

			for (tol = 0; tol < size; tol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
