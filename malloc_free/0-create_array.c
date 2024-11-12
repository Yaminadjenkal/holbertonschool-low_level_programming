#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et l'initialise avec un caract�
 * @size: La taille du tableau.
 * @c: Le caractère avec lequel initialiser le tablau
 * Return: Un pointeur vers le tableau, ou NULL si l'allocation échoue ou si la taille est 
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
