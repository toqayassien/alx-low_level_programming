#include "main.h"
/**
 *_strspn -main
 *@s : string
 *@accept : idk
 *Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int byte = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
	}
	return (byte);
}
