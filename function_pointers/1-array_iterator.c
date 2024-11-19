#include "function_pointers.h"

/**
 *array_iterator-execute une fonction sur les ÃlÃment du tableau
 *@array: tableau d'integers
 *@size: taille du tableau
 *@action: pointeur de fonction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i > size ; i++)
		action(array[i]);
}
