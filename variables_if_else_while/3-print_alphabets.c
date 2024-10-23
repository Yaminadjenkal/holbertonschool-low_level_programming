#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 if success
 */
int main(void)
{
	char b;
	char i;

	i = 'a';
	b = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
		return (0);
}

