#include "stdio.h"
#define MAXNUM 10000

int fab(int limit)
{
	int fabs[MAXNUM] ;
	fabs[0] = fabs[1] = 1;
	int sum = 0 , i;
	for (i = 2; i < MAXNUM; ++i)
	{
		if (fabs[i] == 0)
		{
			fabs[i] = fabs[i-1] + fabs[i-2] ;
		}
		if (fabs[i] > limit)
			break;
		if (fabs[i] % 2 == 0)
		{
			sum += fabs[i] ;
		}
		
	}
	return sum;
}

main()
{
	printf("sum is:%d \n", fab(4000000));
}