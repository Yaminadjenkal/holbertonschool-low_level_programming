#include "lists.h"

/**
 * dlistint_len - Retourne le nombre
 * d'éléments dans une liste doublement chaînée.
 * @h: Pointeur vers la tête de la liste.
 * Return: Le nombre de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
