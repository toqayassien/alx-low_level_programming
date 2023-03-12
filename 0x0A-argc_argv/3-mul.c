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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int z = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", z);
	return (0);
}

