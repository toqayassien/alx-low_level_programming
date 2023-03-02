#include "main.h"
/**
 *cap_string -main entry
 *@str: string 
 *Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
		_putchar(',');
	}
	return (str);
}
