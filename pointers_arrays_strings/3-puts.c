#include "main.h"

/**
 * _puts - imprime une chaîne de caractères suivie d'une nouvelle ligne
 * @str: pointeur vers la chaîne de caractères à imprimer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
}
	_putchar('\n');
	}
