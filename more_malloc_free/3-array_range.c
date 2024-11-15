#include <stdlib.h>

/**
 * array_range - fonction that creat an array
 *@tab variable that take a size of the array
 *@i variable of type int replace min
 *@j variable of type int replace max
 * return NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *tab;
	int size , i;

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
