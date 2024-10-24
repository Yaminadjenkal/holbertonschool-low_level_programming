#include<stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */

int main(void)
{
	char i;

	i = 0;

	while (i <= 9)
	{
	putchar (i + '0');
	i++;
	putchar(',');
	putchar(' ');
	}
	putchar ('\n');
return (0);
}
