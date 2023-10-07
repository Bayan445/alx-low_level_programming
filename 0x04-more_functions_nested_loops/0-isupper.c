#include "main.h"

/**
 *
 *
 *
 *
 *
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

