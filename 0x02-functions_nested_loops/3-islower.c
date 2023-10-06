#include "main.h"

/**
 *
 *
 *
 */

int _islower(int c)
{
	char E;

	for (E = 'a'; E <= 'z'; E++)
	{
		if (c == E)
		{
			return(1);
		}
	}
	
	return(0);
}
