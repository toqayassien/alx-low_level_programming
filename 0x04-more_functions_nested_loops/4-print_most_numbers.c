#include "main.h"
/**
 *print_most_numbers -entry point
 *desc: not 2 and 4
 */
void print_most_numbers(void)/*print_most_numbers*/
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != 2 || x != 4)
		_putchar(x);
	}
	_putchar('\n');
}
