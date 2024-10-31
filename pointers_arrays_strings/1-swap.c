#include "main.h"
/**
*swap_int - swipe the value of integers
*@n: parameter targeted
*Return : nothing
*/

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;

}
