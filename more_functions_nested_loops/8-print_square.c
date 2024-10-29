#include "main.h"
/**
 * print_square - print character (#)
 *@size: the word to print
 * description :use only _putchar to print
 */
void print_square(int size)
{
	int c, i;

	c = 10;
	while (c <= 10)
	{
		i = 0;
		while (i < 10)
		{
			_putchar(i);
		}
		i--;
		{
		_putchar('\n');
		}
	}
}
