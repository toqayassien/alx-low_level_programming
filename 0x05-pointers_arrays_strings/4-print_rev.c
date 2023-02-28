#include "main.h"
/**
 *print_rev -main
 *@s: reverse
 */
void print_rev(char *s)/*print_rev : for betty*/
{
	int i;
	int ind = 0;

	while (s[ind])
		i++;
	{
		for (ind = i - 1; s[i]; ind--)
			_putchar(s[ind]);
	}

	_putchar('\n');
}
