#include "main.h"
/**
 *print_diagonal - print a diagonal
 *@n:character to print
 *description:new ligne if n is 0
 */
void print_diagonal(int n)
	{
	int c, i;

	c = 0;

	if (n <= 0)
	{
	 _putchar('\n');
	}
	else
	{
while (c < n)
{
for (i = 0; i < c; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
c++;
}
}
}
