#include <stdio.h>
#include <stdlib.h>
/**
 * * main - programme qui affiche son propre nom 
 * @argc: Nombre d'arguments passÃ©s au programme (non utilisÃ)
 * @argv: Tableau de chaÃ®nes contenant les argum
 * * Return: 0 si le programme se termine avec succÃ¨s.
 */
nt main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[3]);
	exit(EXIT_SUCCESS);
}
