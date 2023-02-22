#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -entry point
 *description: all natural numbers
 *Return:0
 */
void print_to_98(int n)
{
	if (n <=98)
		{
			for (n = 0; n <= 98; n++)
				printf("%d, ", n);
		}
}
