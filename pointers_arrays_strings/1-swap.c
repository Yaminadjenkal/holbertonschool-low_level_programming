#include "main.h"
/**
*swap_int - swipe the value of integers
*@n: parameter targeted
*Return : nothing
*/

void swap_int(int *a, int *b)
{
	int i = a;
	a = b;
	b = i;

	swap_int(&a, &b);
	_putchar(a = b);

}
