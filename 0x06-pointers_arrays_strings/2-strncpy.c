#include "main.h"
/**
 *_strncpy -main point
 *@dest: destination
 *@src : source 
 *@n: number of char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int len = 0;

	while (src[index++])
		len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
