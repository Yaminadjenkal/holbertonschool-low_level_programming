#include "main.h"
/**
 *more_numbers - print more numbers
 *
 */
void more_numbers(void)
{

	int i, p;

	i = 0;
	p = 0;
	while (p < 10)
	{
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
		i = '0';
		p++;
		_putchar('\n');
	}
}
