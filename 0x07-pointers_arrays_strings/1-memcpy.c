#include "main.h"
/**
 *_memcpy -main
 *@src : source
 *@dest: destination
 *@n : bytes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *fir = dest;
	char *sec = src;
	unsigned int m;

	for (m = 0; m < n; m++)
		fir[m] = sec[m];
	return (dest);
}
