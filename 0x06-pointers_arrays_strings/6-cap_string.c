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
		while (str[i] >= 'a' && str[i] <= 'z')
			i++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
