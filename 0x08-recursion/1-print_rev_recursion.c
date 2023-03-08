#include "main.h"
/**
 *_print_rev_recursion -main
 *@s :string
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
