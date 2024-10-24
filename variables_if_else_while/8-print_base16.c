#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char i;
	char j;

	i = '0';

	j = 'f';
	while (i <= '9')
	{	putchar (i);
		i++;
	}
	while (j <= 'a')
	{	putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
