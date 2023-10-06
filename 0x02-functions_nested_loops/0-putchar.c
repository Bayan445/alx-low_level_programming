#include "main.h"

/**
 * main - I will print char by char a string
 *
 *
 *
 * Return: always 0.
 */

int main(void)
{

	int i;
	char arr[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}

	_putchar('\n');
	return (0);
}
