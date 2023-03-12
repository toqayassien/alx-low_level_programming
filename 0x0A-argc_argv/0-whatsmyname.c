#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -main entry
 *@argc: arg count
 *@argv: arg vec
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}

