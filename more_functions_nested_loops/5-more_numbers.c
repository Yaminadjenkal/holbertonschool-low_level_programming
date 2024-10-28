#include "main.h"
/**
 *more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
int i , s;
	for (i = 0; i <= 14; i++)
		_putchar(i /10 +'0');
		putchar (i % 10 +'0');
	for (s = 0; s <= 10; s++)
		_putchar(s/10 +'0');
		_putchar(s % 10+'0');
		_putchar('\n');
