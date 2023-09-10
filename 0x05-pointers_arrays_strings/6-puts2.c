#include "main.h"
#include <string.h>

/**
 * puts2 - Reverses a string
 * @str: Input string
 */

void puts2(char *str)
{
	int i;
	int length;


	length = strlen(str);

	for (i = 0; i <= length - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

