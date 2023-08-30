
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Descreption: A program that prints the alphabet in lowercase
 * Return: always 0 (Success)
 */


int main(void)
{
	void print_alphabet(void);
	{
		int ea;

		for (ea = 'a'; ea <= 'z'; ea++)
		{
			_putchar(ea);
			_putchar('\n');
		}
	}

	return (0);


}
