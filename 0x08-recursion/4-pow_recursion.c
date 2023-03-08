#include "main.h"
/**
 *_pow_recursion -main entry
 *@x: int a
 *@y: int power
 *Return: result
 */
int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	n *= _pow_recursion(x, y - 1);
	return (n);
}
