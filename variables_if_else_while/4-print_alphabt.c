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
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	return (0);
}

