#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 if success
 * more headers goes there
 * betty style doc for function main goes there
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%i is positive", n);
	if (n < 0)
	printf("%i is negative", n);
	if (n == 0)
	printf("%i is zero", n);
	return (0);
}
