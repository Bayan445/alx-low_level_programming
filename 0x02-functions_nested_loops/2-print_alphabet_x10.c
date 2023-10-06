#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;
	char pe;

	while (i < 10)
	{
		for (pe = 'a'; pe <= 'z'; pe++)
		{
			_putchar (pe);
		}
		_putchar ('\n');

		i++;
	}
}

