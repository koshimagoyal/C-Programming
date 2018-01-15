#include<stdio.h>
void main()
{
	int n;
	float sum=0.0,a,i;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++)
	{
		sum+=(1/i);
		//printf("i=%f,a=%f",i,1/i);
	}
	printf("Sum=%.2f",sum);
}
