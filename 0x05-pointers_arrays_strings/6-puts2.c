#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints the
 * characters one yes one no
 *
 * @str: a string to be printed in our way
 *
 */

void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
