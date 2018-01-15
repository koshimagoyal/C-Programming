#include<stdio.h>
void main()
{
	int n,p=1,k;
	printf("\n enter number");
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		p*=k;
		n=n/10;
	}
	printf("\n product=%d",p);
}
