#include "main.h"
/**
 *print_rev -main
 *@s: reverse
 */
void print_rev(char *s)/*print_rev : for betty*/
{
	int index = 0;
	int len = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
