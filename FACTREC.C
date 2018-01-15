#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
void main()
{
	int n;
	printf("\n enter the number");
	scanf("%d",&n);
	printf("\n Factorial = %ld",fact(n));
	getch();
}