#include "main.h"
/**
 *print_chessboard -main
 *@a : array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int v;

	for (i = 0; a[i][7]; i++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[i][v]);
		_putchar('\n');
	}
}
