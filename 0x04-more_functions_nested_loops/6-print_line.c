#include "main.h"
/**
 *print_line -main entry
 *Desc: print line
 *@n: lines
 */
void print_line(int n)/*print_line: for betty*/
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
