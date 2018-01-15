#include<stdio.h>
#define a 24
void main()
{
	#if (a%2==0)
		printf("even");
	#elif (a%2!=0)
		printf("odd");
	#else
		printf("a=24");
	#fi
}
