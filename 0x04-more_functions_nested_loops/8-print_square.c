#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
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
