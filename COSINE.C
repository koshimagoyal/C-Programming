#include<stdio.h>
#include<conio.h>
#include<math.h>
long int fact(int n)
{
	long int sum=0;
	while(n>0)
	{
		sum=sum*n;
		n=n-1;
	}
	return sum;
}
void main()
{
	int n,i,x;
	float sum;
	printf("\n enter the no of term of cosine series");
	scanf("%d%d",&n,&x);
	for(i=0;i<=n;i++)
	sum=sum+(float)(pow(-1,i+2)*pow(x,2*i))/fact(2*i);
	printf("\n Sum= %lf",sum);
	getch();
}