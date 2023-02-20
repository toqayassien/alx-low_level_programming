#include <stdio.h>
/**
 * main -Entry point
 * Description:combos
 * Return:0
 */
int main(void)/*main: for betty*/
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x %10) + '0');
	if (x == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
