#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	i=1+(rand()%n);
	printf("i=%d",i);
	printf("srand=%d",srand(time(NULL)));
	srand(n);
}
