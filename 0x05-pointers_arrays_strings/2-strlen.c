#include "main.h"
/**
 *_strlen -main
 *@s : string
 *return:0
 */
int _strlen(char *s)/*_strlen : for betty*/
{
	char str[100];
	int i;
	int l = 0;

	for (i = 0; str[i]; i++)
		l++;
	_putchar(i);
	return (0);
}
