#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
