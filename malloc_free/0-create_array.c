#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et l'initialise avec un cart
 * @size: La taille du tableau.
 * @c: Le caractère avec lequel initialiser le tabeau
 * Return: Un pointeur vers le tableau, ou NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
