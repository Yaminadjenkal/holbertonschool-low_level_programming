#include "lists.h"
#include <stdlib.h>

/**
 * free_list - libère une liste list_t.
 * @head: pointeur vers la tête de la liste.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
