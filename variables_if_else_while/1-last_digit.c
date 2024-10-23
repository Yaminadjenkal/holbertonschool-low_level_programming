#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of n");
	printf("is %d\n, n % 10);
	if (n > 5)
	{
		printf("Last digit of n % 10 and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n % 10 and is 0\n", n);
	}
	else (n != 0)
	{
		printf("Last digit of n % 10 and is less than 6 and not 0\n", n);
	}
	return (0);
}
