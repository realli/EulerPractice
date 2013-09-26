#include "stdio.h"
long long func(long long num){
	long long i ;
	for (i = 2; i < num; ++i)
	{
		if(num % i == 0){
			break ;
		}
	}
	if(i == num)
		return num ;
	else
		return func(num / i);
}
main(){
	printf("result is:%ld\n",func(600851475143) );
}