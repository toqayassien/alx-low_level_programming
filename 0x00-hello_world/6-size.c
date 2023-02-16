#include <stdio.h>
/**
 * Main -Entry point
 * Description: print sizes of data types
 * return:0
 */
int main(void)/*main:entry point*/
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;
	
	printf("size of char:%zu byte\n",sizeof(c));
	printf("size of int:%zu byte\n",sizeof(i));
	printf("size of long int:%zu byte\n",sizeof(li));
	printf("size of long long int:%zu byte\n",sizeof(lli));
	printf("size of float:%zu byte\n",sizeof(f));

	return (0);
}
