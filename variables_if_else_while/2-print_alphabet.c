#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char i;

	i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
