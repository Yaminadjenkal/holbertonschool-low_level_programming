#include "main.h"
/**
 * print_square - print character (#)
 *@size: the word to print
 * description :use only _putchar to print
 */
void print_square(int size)
	int c, i;
	c = 0;

	if (n <= 0) 
{
		_putchar('\n');
	}
else
{
		while (c < size) 
		{
			for (i = 0; i < c; i++)
			{
				
				_putchar('#');
			}
			_putchar('\n');
			c++;
		}
	}
}
