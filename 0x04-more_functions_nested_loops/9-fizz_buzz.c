#include <stdio.h>
/**
 *main -main entry
 *Desc: FizzBuzz
 */
int main(void)/*main: for betty*/
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("\nFizz\n");
		else if ((i % 5) == 0)
			printf("\nBuzz\n");
		else if ((i % 5) == 0 && (i % 3) == 0)
			printf("\nFizzBuzz\n");
	}
	printf("%d\n", i);
}
