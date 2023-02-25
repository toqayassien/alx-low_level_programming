#include "main.h"
/**
 *print_numbers -entry point
 *Desc: print numbers
 */
void print_numbers(void)/*print_numbers: for betty*/
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
