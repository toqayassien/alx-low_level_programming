#include <stdio.h>
/**
 * main -Entry point
 * Description: delete e and q
 * Return:0
 */
int main(void)/*main: for betty*/
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' != 'e' != 'q'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
