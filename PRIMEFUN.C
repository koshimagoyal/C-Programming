#include<stdio.h>
#include<conio.h>
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("\n it is prime");
	else
		printf("\n it is not prime");
}
void main()
{
	int m;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&m);
	prime(m);
	getch();
}