#include "main.h"
/**
 *print_diagonal -main point
 *Desc: print line
 *@n: length
 */
void print_diagonal(int n)/*print_diagonal: for betty*/
{
	int len;
	int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');
			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
