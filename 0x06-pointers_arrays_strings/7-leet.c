#include "main.h"
/**
 *leet -main entry
 *@str: string to encode
 *Return: str
 */
char *leet(char *str)
{
	char *d = str;
	char a[] = {'a', 'e', 'o', 't', 'i'};
	char b[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
				*str = b[i] + '0';
		}
		str++;
	}
	return (d);
}
