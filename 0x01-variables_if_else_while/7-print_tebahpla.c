#include <stdio.h>
/**
 * main -Entry point
 * Description:reverse alphabet
 * Return:0
 */
int main(void)/*main:description for betty*/
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
