#include "main.h"
/**
 *_puts -main
 *@str :string 
 */
void _puts(char *str)/*_puts: for betty*/
{
	char rin[10];
	int i;

	str = &rin[10];
	for (i =0; i < 11; i++)
		_puts("*str\n");
}
