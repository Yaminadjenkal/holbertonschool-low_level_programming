#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to an array of 8 characters
 */
void print_chessboard(char (*a)[8])
{
	char i, j;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
