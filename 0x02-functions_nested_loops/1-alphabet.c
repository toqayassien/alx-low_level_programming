#include <stdio.h>
#include "main.h"
/**
 * main -entry point
 * desc: print alphabet
 * Return:0
 */
void print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
