#include "main.h"
/**
 * print_square - print character (#)
 *@size: the word to print
 * description :use only _putchar to print
 */
void print_square(int size)
{
	int s, i;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
	for (s= 0; s < size; s++)
		for (i = 0; i < size; i++)
	
	{
		_putchar('#');
	}
}
}
