#include "main.h"
/**
 * main -entry point
 * desc: print alphabet
 * Return:0
 */
int main(void)/*main: for betty*/
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
