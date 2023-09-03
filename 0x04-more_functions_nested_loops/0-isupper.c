#include "main.h"

/**
 * main - Entry point
 * Descreption: checks if the character is capital or not
 * Return: always 0 (Success)
 */

	int _isupper(int c)
	{ 
		int c;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}

