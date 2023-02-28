#include "main.h"
/**
 *print_rev -main
 *@s: reverse
 */
void print_rev(char *s)/*print_rev : for betty*/
{
	int index;
	int len = 0;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
