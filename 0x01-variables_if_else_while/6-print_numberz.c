#include <stdio.h>
/**
 * main -Entry point
 * Description:numbers
 * Return:0
 */
int main(void)/*main:for betty*/
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
