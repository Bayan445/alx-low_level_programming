#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - a tubid recursive function
 *
 * @s: a string to be printed in reverse
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		/**
		 * it moves to the next character
		 * so when it = to null it stop
		 */

		_putchar(*s);

	}

}



