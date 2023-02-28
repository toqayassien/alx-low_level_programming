#include "main.h"
/**
 **_strcpy -main
 *@dest: str1
 *@src: str2
 *return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
