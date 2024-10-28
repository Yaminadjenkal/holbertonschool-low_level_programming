#include "main.h"
/**
 *more_numbers - print more numbers
 *
 */
void more_numbers(void)
{

	int i;
	char p;

	i = 'a';
	p = 0;
	while (p < 10)
	{
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		p++;
		_putchar('\n');
	}
}
