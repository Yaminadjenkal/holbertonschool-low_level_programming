#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatène deux chaînes de caractè
 * @s1: Première haîe
 * @s2: Deuxième chaî
 * @n: Nombre de caractères de s2 à concaté
 * Return: Pointeur vers la nouvelle chaîne concaténée, ou NULL en cas d'é
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
