#include "main.h"
/**
 *rev_string -main
 *@s: reversed string
 */
void rev_string(char *s)/*rev_string : for betty*/
{
	int len;
	int index;

	len = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
