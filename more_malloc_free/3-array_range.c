#include <stdlib.h>

/**
 * array_range - fonction pour crÃer un tableau
 *@min valeur minimal incluse dans le tableau
 *@max valeur maximal incluse dans le tableau
 *Return : pointeur nouvellement crÃe ou NULL si echec
 */
int *array_range(int min, int max)
{
	int *tab;
	int size ,i;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	tab = malloc(size * sizeof(int));
	if (tab == NULL)
	return (NULL);

	for (i = 0; i < size ; i++)
	{
		tab[i] = min + i;
	}
	return (tab);
}
