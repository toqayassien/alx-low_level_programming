#include "main.h"
/**
 *puts_half -main entry
 *@str : string to split
 */
void puts_half(char *str)/*puts_half: for betty*/
{
	int len = 0;
	int index = 0;
	int n;

	while (str[index++])
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;
	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
