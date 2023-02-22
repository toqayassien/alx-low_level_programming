#include "main.h"
/**
 * print alphabet -entry point
 * desc: print alphabet
 */
void print_alphabet(void)/*print_alphabet: for betty*/
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
