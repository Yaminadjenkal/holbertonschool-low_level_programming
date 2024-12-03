#include "lists.h"

size_t print_list(const list_t *h) {
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL) {
        if (current->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", (unsigned long)strlen(current->str), current->str);
        }
        count++;
        current = current->next;
    }
    return count;
}

