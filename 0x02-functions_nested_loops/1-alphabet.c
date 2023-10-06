#include "main.h"

/**
 * main - the entry point for the program
 *
 * Return: always
 */

void print_alphabet(void)
{
	char pe;
	
	for (pe = 'a'; pe <= 'z'; pe++)
	{
		_putchar (pe);
	}
	_putchar ('\n');

	return;
}
