#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - Programme qui affiche son propre nom
 *  @argc: Nombre d'arguments passés au programme (non utilis�)
 *  @argv: Tableau de chaînes contenant les arguments.
 * Return: 0 si le programme se termine avec succès.
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
