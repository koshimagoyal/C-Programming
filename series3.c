#include<stdio.h>
void main()
{
	int n;
	float sum=0.0,a,i;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++)
		sum+=(pow(i,i)/i);
	printf("Sum=%f",sum);
}
