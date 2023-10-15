#include <string.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: a string to be reversed
 *
 */

void rev_string(char *s)
{
	char thirdbox;
	int t, length;


	length = strlen(s);

	for (t = 0; t < length / 2; t++)
	{

		thirdbox = s[t];
		s[t] = s[length - 1 - t];
		s[length - 1 - t] = thirdbox;
	}

}

