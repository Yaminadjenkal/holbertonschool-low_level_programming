#include "main.h"
/**
 * print_line - print the character (-)
 * descrption : only use _putchar to print
 *@n:character to print
 */
void print_line(int n) 
{
	for (n < 0; n; n++)
	{
		_putchar('\n');
	}
		if (n > 0)
			
			_putchar('-');
			_putchar('\n');
		
}
