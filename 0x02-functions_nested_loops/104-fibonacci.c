#include <stdio.h>
#include "main.h"
/**
 *main -entry point
 *desc: fibonacci
 *Return:0
 */
int main(void)/*main: for betty*/
{
	int fib1 = 1, fib2 = 2, sum;
	int count = 1;

	for ( count = 0; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf("%d, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
