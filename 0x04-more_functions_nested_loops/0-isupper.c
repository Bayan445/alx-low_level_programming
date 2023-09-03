#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 * Descreption: checks if the character is capital or not
 * Return: always 0 (Success)
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

