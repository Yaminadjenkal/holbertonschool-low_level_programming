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

	j = 'a';

	while (i <= '9')
	{	putchar(i);
		i++;
	}
	while (j <= 'f')
	{	putchar(j);
		j++;
	}
	putchar ('\n');
	return (0);
}
