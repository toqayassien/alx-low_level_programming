#include <stdio.h>
#include <stdlib.h>
/**
 *main -main point
 *@argc: arg count
 *@argv: arg vec
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	z = a * b;
	printf("%d\n", z);
	return (0);
}

