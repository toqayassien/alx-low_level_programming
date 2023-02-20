#include <stdio.h>
/**
 * main -Entry point
 * Description: print alphabet
 * Return:0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
