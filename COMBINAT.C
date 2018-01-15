#include<stdio.h>
#include<conio.h>
long int fact(int s)
{
	long int f=1;
	while(s>1)
	{
		f*=s;
		s=s-1;
	}
	return f;
}
void main()
{
	int n,r;
	long int fac;
	clrscr();
	printf("\n enter the n and r");
	scanf("%d %d",&n,&r);
	fac=fact(n)/(fact(n-r)*fact(r));
	printf("\n Combination = %ld",fac);
	getch();
}