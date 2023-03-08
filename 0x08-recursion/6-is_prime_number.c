#include "main.h"
/**
 *is_prime_number -main entry
 *@n : integer
 *Return: int
 */
int is_prime_number(int n)
{
	if ((n % 1) == 0 && (n % n) == 0)
	{
		return (1);
	}
	return (0);
}
