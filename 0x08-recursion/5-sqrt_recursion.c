#include "main.h"
/**
 *_sqrt_recursion -main
 *@n: number
 *Return: result
 */
int _sqrt_recursion(int n)
{
	int x;
	int z = x * x;

	if (n == z)
	{

		if (n <= 0)
			return (-1);

		else if (n == 1)
			return (1);

		else
			return (x);
	}
	return (0);
}
