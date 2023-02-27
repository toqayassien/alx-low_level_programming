#include "main.h"
/**
 *_puts -main
 *@str :string
 */
void _puts(char *str)/*_puts: for betty*/
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
