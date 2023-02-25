#include "main.h"
/**
 *print_square -main entry
 *Desc: print square
 *@size: of square
 */
void print_square(int size)/*print_square: for betty*/
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size -1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
