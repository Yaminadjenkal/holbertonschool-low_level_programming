#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char p;

	i = 'a';
	p = 0;
	while (p <= 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		p++;
		_putchar('\n');
	}
}
