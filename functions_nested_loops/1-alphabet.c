#include "main.h"
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
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
