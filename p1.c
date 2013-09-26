#include "stdio.h"

void func(int limit)
{
	int numTree, numFive, numFif ;
	int sumTree, sumFive, sumFif ;
	numTree = (limit-1) / 3 ;
	numFif = (limit-1) / 15 ;
	numFive = (limit-1) / 5 ;

	sumTree = (3*numTree + 3) * numTree / 2;
	sumFive = (5* numFive + 5) * numFive / 2;
	sumFif = (15*numFif + 15) * numFif / 2;

	printf(" Sum is: %d \n", sumFive+sumTree-sumFif);
	
}

main()
{
	int * x ;
	scanf("input num:%d", x);
	func(*x);
	
}