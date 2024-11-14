#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc et vérifie l'allocati
 * @b: La taille de la mémoire à allouer en octe
 * Return: Un pointeur vers la mémoire allou�
 * Si l'allocation échoue, termine le programme avec le statut 9
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
