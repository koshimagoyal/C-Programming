#include<stdio.h>
#include<conio.h>
long int fib(int n)
{
	long int f;
	if(n==1||n==2)
		return 1;
	else
	       return fib(n-1)+fib(n-2);
}
void main()
{
	int n;
	printf("\n enter the term till you want to print series");
	scanf("%d",&n);
	printf("\n %ld",fib(n));
	getch();
}