#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("\n Sum = %d",sum);
	getch();
}