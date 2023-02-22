#include "main.h"
/**
 * jack_bauer -entry point
 * desc: 24 hours
 */
void jack_bauer(void)/*jack_bauer: for betty*/
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
