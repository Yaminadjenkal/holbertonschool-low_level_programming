#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */

int *array_range(int min, int max)
{
	int *tab;
	int size, i;

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
