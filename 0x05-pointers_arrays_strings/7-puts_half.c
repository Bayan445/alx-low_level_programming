#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints the second
 * half of string
 *
 * @str: the used string
 */

void puts_half(char *str)
{
	int i, t, length;

	length = strlen(str);


	if (length % 2 == 0)
	{
		for (t = length / 2; t < length; t++)
		{
			_putchar(str[t]);
		}

		_putchar('\n');
	}

	else if (length % 2 != 0)
	{
		for (i = length - 1 / 2; i > length - 2 / 2; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
