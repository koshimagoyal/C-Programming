#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,t,r,a,b;
	printf("\n enter the numbers");
	scanf("%d %d",&n,&m);
	a=n;
	b=m;
	while(r!=0)
	{
		if(n<m)
		{
			r=m%n;
			m=n;
			n=r;
		}
		else
		{
			t=m;
			m=n;
			n=t;
		}
	}
	printf("\n HCF of %d and %d is %d",a,b,m);
	getch();
}