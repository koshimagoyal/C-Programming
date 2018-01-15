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
	int p;
	long int fac;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&p);
	fac=fact(p);
	printf("\n factorial = %ld",fac);
	getch();
}