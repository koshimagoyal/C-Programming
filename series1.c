#include<stdio.h>
void main()
{
	int n;
	float sum=0.0,a,i;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++)
		sum+=(1/pow(i,2));
	printf("Sum=%.2f",sum);
}
