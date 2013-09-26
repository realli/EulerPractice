#include "stdio.h"


int isParChars(char* sq, int n){
	int i;
	for (i = 0; i < n/2; ++i)
	{
		if(sq[i] != sq[n-1-i])
			return 0;
	}
	return 1;
}

int isPar(num){
	char result[20];
	int i ,next;
	i = 0;
	do{
		result[i++] = '0' + num % 10;
	}
	while ((num = num / 10) >0 );
	return isParChars(result, i) ;
}

int func(max){
	int i, j;
	int sum;
	int res = 0;
	for (i = max; i >99; --i)
	{
		for (j = i; j > 99; --j)
		{
			sum = i*j ;
			if (isPar(sum) && sum > res)
				res = sum;
		}
	}
	return res;
}
main(){
	printf("%d\n", func(999));
}