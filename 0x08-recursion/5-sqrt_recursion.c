#include "main.h"
/**
 *_sqrt_recursion -main
 *@n: number
 *Return: result
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n <= 0)
		return (-1);

	else if (n == 1)
		return (1);

	else if (n > 1)
	{
		x = _sqrt_recursion(n);
		x * x == n; 
	}
	return (x);
}
