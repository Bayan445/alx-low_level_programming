#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
