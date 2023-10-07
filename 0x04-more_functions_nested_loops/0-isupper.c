#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: a char to be checked
 *
 * Return: it returns 1 and 0.
 */
int _isupper(int c)
{
	char E = c;

	for (E = 'A'; E <= 'Z'; E++)
	{
		if (c == E)
		{
			return (1);
		}
	}

	return (0);

}

