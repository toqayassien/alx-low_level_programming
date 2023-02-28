#include "main.h"
/**
 *_strlen -main
 *@s : string
 *Return:value of string
 */
int _strlen(char *s)/*_strlen : for betty*/
{
	int i;
	int l = 0;

	for (i = 0; s[i]; i++)
		l++;
	return (i);
}
