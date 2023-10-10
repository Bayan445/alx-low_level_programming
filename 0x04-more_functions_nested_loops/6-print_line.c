#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 */

void print_line(int n)
{
	int tot;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (tot = 1; tot < n; tot++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

