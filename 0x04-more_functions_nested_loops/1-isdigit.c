#include "main.h"

/**
 * _isdigit - uppercase letters
 * @c: digit to check
 * Descreption: checks if the character is capital or not
 * Return:  0 or 1(Success)
 */

int _isdigit(int c)
{
	if ( _isdigit(c) && 0 <= c && c <= 9 )
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
