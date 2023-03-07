#include "main.h"
/**
 *_memset -main
 *@s : pointer
 *@b : const byte
 *@n : char numbers
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;
	char byte = b;
	unsigned int num;

	for (num = 0; num < n; num++)
		str[num] = byte;
	return (str);	
}
