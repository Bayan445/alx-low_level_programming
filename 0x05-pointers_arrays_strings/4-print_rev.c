#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: a string to be reversed
 *
 *
 */

void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	if (length == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = length; i != '\0'; i--)
		{
			_putchar(s[i]);
		}
		
		_putchar('\n');
	}
}
