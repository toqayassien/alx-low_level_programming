#include <stdio.h>
/**
 * main -Entry point
 * Description:upper and lower alphabet
 * Return:0
 */
int main(void)/*main: description for betty*/
{
	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; ch <= 'Z'; ch++)
		putchar(CH);
	putchar('\n');
	return (0);
}
