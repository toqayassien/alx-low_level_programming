#include "main.h"
/**
 *puts2 -main entry
 *@str: string
 */
void puts2(char *str)/*puts2 : for betty*/
{
	int len = 0;
	int index = 0;

	while (str[index++])
		len++;

	for (index = len - 1; index >= len - 2; index++)
	_putchar('\n');
}
