#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, lenght;

	lenght = strlen(s);

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
