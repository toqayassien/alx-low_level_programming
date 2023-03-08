#include "main.h"
/**
 *_sqrt_recursion -main
 *@n: number
 *Return: result
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n <= 0)
		return (-1);

	else if (n == 1)
		return (1);

	else if (n == x * x)
	{
		x = _sqrt_recursion(n);
	}
	return (x);
}
