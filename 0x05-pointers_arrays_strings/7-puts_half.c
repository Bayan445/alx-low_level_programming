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
	int i, length;

	length = strlen(str);


	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');

	}

	else if (length % 2 != 0)
	{

		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
