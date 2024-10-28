#include "main.h"
/**
 *more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int i;

	char p;

	i = 0;
	p = 0;

	while (i < 10)
	{
		while (p <= 14)

			_putchar(i);
		i++;
		i = '0';
		p++;

		_putchar('\n');
	}
}
