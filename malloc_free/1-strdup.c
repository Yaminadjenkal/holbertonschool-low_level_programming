#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Retourne un pointeur vers un nouvel espace alloué en mémoire, qui contient une copie de la chaîne donnée en paramètre.
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la nouvelle chaîne dupliquée, ou NULL si str est NULL ou si l'allocation échoue.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0';

	return (dup_str);
}
