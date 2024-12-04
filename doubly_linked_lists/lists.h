#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - structure pour une liste doublement chaînée
 * @n: entier
 * @prev: pointeur vers le nœud précédent
 * @next: pointeur vers le nœud suivant
 *
 * Description: nœud de base pour une liste doublement chaînée
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Prototypes des fonctions */
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif /* LISTS_H */

