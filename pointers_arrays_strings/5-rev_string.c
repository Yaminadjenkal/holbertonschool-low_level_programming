#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in revers
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
