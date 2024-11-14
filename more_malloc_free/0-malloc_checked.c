#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloue de la mémoir
 * @b: La taille de la mémoire  allouer a la memoire
 * Return: Un pointeur vers la mémoire alouee
 * Si l'allocation échoue, termine le programme avec le statu
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
