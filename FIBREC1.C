#include<stdio.h>
#include<conio.h>
void fib(int n)
{
	int t=0,s=1,f,count=3;
	while(count<=n)
	{
		f=t+s;
		printf(" %d",f);
		t=s;
		s=f;
		count++;
	}
}
void main()
{
	int n,t=0,s=1;
	printf("\n enter the term till you want to print series");
	scanf("%d",&n);
	printf("%d %d",t,s);
	fib(n);
	getch();
}
