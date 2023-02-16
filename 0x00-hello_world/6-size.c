#include <stdio.h>
/**
 * main -Entry point
 * Description: print sizes of data types
 * Return: 0
 */
int main(void)/*entry point*/
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;
	
	printf("size of char:%zu byte(s)\n", sizeof(c));
	printf("size of int:%zu byte(s)\n", sizeof(i));
	printf("size of long int:%zu byte(s)\n", sizeof(li));
	printf("size of long long int:%zu byte(s)\n", sizeof(lli));
	printf("size of float:%zu byte(s)\n", sizeof(f));

	return (0);
}
