#include "main.h"
/**
 * print_sign -entry point
 * @n:letter
 * desc: print sign
 * Return:0
 */
int print_sign(int n)/*print_sign: for betty*/
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
