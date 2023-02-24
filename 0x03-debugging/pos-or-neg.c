#include "main.h"

void positive_or_negative(int i)/*print_sign: for betty*/
{
	if (i > 0)
	{	_putchar('+');
		return (1);
	}
	else if (i < 0)
	{	_putchar('-');
		return (-1);
	}
	else
	{	_putchar('0');
		return (0);
	}
	return (0);
}
