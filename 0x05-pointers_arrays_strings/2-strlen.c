#include "main.h"
/**
 *_strlen -main
 *@s : string
 *return:0
 */
int _strlen(char *s)/*_strlen : for betty*/
{
	int i;
	int l = 0;

	for (i = 0; s[i]; i++)
		l++;
	_putchar(i);
	return (0);
}
