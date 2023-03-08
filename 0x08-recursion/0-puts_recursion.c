#include "main.h"
/**
 *_puts_recursion -main entry
 *@s :string
 */
void _puts_recursion(char *s)
{
	_puts_recursion(s);
	_putchar('\n');
}
