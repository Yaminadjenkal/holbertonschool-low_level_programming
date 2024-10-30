#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 * printf to print words
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) 
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
	       	else if (i % 5 == 0)
		{
			printf("Buzz");
		}
	       	else
		{
			printf("%d", i);
		}
		if (i < 100) 
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
