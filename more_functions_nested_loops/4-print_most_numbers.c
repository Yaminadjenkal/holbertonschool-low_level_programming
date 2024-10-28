#include "main.h"
/**
 * print_most_numbers - print all nembers except 
 *
 * 
 */
void print_most_numbers(void)
{
	int i ;

	i = 0;
	while (i <= '9')
{
	if (i != '2' && i != '4')
		_putchar (i);
	i++;
}
}
_putchar ('\n');
