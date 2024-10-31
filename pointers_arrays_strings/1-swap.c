#include "main.h"
/**
*swap_int - swipe the value of integers
*@n: parameter targeted
*Return : nothing
*/

void swap_int(int *a, int *b)
{
	a = b;
	swap_int(&a, &b);
	_putchar(a = b);

}
