#include "main.h"
/**
 *Return: int
 *factorial -main 
 *@n :int
 */
int factorial(int n)
{
	if (n < 0)
		return -1;

	else if (n == 0 || n == 1)
		return 1;

	n *= factorial(n -1);

	return (n);
}
