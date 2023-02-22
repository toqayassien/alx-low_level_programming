#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -entry point
 *description: all natural numbers
 *Return:0
 *@n: nu
 */
void print_to_98(int n)/*print_to_98: for betty*/
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
