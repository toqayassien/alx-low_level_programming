#include "main.h"

int positive_or_negative(int n)/*print_sign: for betty*/
{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n < 0)
	{	_putchar('-');
		return (-1);
	}
	else
	{	_putchar('0');
		return (0);
	}
	return (0);
}
