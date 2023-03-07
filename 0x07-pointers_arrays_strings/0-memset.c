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
	for (n = 0; s[n]; n++)
	s[n] = b;
	return (s);	
}
