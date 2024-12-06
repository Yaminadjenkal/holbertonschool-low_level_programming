#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée dans une liste dlistint_t.
 * @h: Double pointeur vers la tête de la liste.
 * @idx: Index de la liste où le nouveau nœud doit être ajouté. L'index commence à 0.
 * @n: Entier à insérer dans le nouveau nœud.
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;


	if (idx == 0)
		return (add_dnodeint(h, n));

