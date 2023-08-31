
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
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar('\n');
		}
	}

	return (0);


}
