#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * using recursion way.
 *
 * @s: a string to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}

}

