#include "main.h"
/**
 *more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int i, a;
	i = 0;
	a = 0;
	while (a < 10)
	{
		while (i <= 14)
			_putchar(i);
			i++;
	}
	i = '0';
	a++;
	_putchar ('\n');
}
