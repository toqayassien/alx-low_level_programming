#include "main.h"
/**
 * print_last_digit -entry point
 * desc: last digit
 * Return:0
 * @x
 */
int print_last_digit(int x)/*print_last_digit: for betty*/
{
	int l = x % 10;

	_putchar(l + '0');
	return (0);
}
