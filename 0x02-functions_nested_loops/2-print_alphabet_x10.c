#include "main.h"
/**
 *print_alphabet_x10 -entry point
 *desc: print alphabet x10
 */
void print_alphabet_x10(void)/*print_alphabet_x10: for betty*/
{
	int x = 0;
	char c;

	while (x++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
