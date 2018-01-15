#include<stdio.h>
void main()
{
	int n,i,sum=0,x;
	printf("\n enter the number and last term");
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum+=(pow(x,i));
		else
		sum-=(pow(x,i));
	}
	printf("Sum=%d",sum);
}
