// print2.c -- 更多printf()的特性
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	unsigned long long unbig = 32234254332145645634625;

	printf("un = %u and not %d \n", un, un);
	printf("end = %hd and %d\n", end , end);
	printf("big = %ld and not %hd\n", big ,big);
	printf("verybig = %lld and not %ld\n",verybig, verybig);
	printf("unbig = %llu and not %ld\n", unbig, unbig);
	
	return 0;
}
