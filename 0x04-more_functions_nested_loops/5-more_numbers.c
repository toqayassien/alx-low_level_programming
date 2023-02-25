#include "main.h"
/**
 *more_numbers -entry point
 *Desc: 10 times
 */
void more_numbers(void)/*more_numbers: for betty*/
{
	int x;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			_putchar((x / 10)+ '0');
			_putchar((x % 10)+ '0');
		}
		_putchar('\n');
	}
}
