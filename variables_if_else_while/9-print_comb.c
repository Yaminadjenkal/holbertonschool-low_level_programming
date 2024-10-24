#include<stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */

int main(void)
{
	char i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar ('\n');
	return (0);
}
