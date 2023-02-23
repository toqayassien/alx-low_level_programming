#include <stdio.h>
#include "main.h"
/**
 *main -entry point
 *desc: fibonacci
 *Return:0
 */
int main(void)/*main: for betty*/
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	int count = 0;

	for (count = 0; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
