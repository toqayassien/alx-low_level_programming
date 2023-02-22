#include "main.h"
/**
 * times_table -entry point
 * desc: time table
 */
void times_table(void)/*times_table: for betty*/
{
	int x;
	int t;
	int r;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (t = 1; t <= 9; t++);
		{
			_putchar(',');
			_putchar(' ');
			
			r = x * t;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
