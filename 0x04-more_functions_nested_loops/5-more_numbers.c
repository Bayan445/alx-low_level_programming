#include "main.h"

/**
 * more_numbers  - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int e;
	for (e = 0 ; e < 10 ; e++)
	{
		char b;
		for (b = 48; b < 63; b++)
		{
			_putchar(b);
		}

	       char r;
	       for (r = 10; r < 15; r++)
	       {
		       _putchar(r + '0');
	       }
		_putchar('\n');
	}

}
