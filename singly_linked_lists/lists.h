#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
