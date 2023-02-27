#include "main.h"
/**
 *_puts -main
 *@str :string 
 */
void _puts(char *str)/*_puts: for betty*/
{
	char ring[] = "StringtoStdout";
	
	str = ring;
	_putchar(*str);
}
