#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Affiche tous les éléments d'une liste doublement chaînée.
 * @h: Pointeur vers la tête de la liste.
 * Return: Le nombre de nœuds dans la liste.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
