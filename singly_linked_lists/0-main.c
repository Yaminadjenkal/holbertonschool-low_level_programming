#include "lists.h"

int main(void) {
	list_t hello = {"World", NULL};
	list_t *head = &hello;

	size_t num_nodes = print_list(head);
	printf("Nombre total de nœuds : %lu\n", (unsigned long)num_nodes);

	return 0;
}

