#include "main.h"
/**
 *Desc: print line
 *print_diagonal -main entry
 *@n: length
 */
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		_putchar('\\');
	}
	else 
		_putchar('\n');
	_putchar('\n');
}
