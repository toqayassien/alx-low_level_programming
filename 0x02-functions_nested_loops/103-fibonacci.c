#include <stdio.h>
#include "main.h"
/**
 *main -entry point
 *desc: fibonacci
 *Return:0
 */
int main(void)/*main: for betty*/
{
	int fib1 = 0, fib2 = 1, sum;
	unsigned long tot;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			tot += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", tot);
	return (0);
}
