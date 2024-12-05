#include "lists.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node; *temp;
	new_node = malloc (sizeof (dlistint_t);
			if (new_node == NULL)
			return (NULL);

			if (*head == NULL)
			{
			new_node->prev = NULL;
			*head = new_node;
			return (new_node);

			}
			temps = *head;

			while (temp->next != NULL)
			temp = temp->next;
			temps->next = new_node;
			new_node->prev = temp;
			return (new_node)
			}
