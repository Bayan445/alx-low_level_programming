

#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
        char E;
	char B;

        for (E = 'a'; E <= 'z'; E++)
        {
		for (B = 'A'; B <= 'Z'; B++)
		{
			if (c == E || c == B)
			return(1);
		}

	}

	return(0);
}
