#include <stdio.h>
/**
 * main -Entry point
 * Description:upper and lower alphabet
 * Return:0
 */
int main(void)/*main: description for betty*/
{
	char ch = 'a';
	char hc = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (hc = 'A'; hc <= 'Z'; hc++)
		putchar(hc);
	putchar('\n');
	return (0);
}
