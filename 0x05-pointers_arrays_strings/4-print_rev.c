#include "main.h"
#include <string.h>

/**
 *
 *
 *
 *
 *
 */

void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	for (i = length; i != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
