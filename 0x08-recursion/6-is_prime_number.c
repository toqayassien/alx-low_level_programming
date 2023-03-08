#include "main.h"
/**
 *is_prime_number -main entry
 *@n : integer
 *Return: int
 */
int is_prime_number(int n)
{
	if ((n % 1) == 1 && (n % n) == 1)
		return (1);
	else
		return (0);
}
