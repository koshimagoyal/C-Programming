#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sum(char b[])
{
       int k,i,sum=0,n;
       k=atoi(b);
	while(k>0)
	{
		n=k%10;
		sum+=n;
		k=k/10;
	}
	printf("\n sum=%d",sum);
}
void main()
{
	char a[10];
	clrscr();
	printf("\n enter the alphanumeric");
	scanf("%s",a);
	sum(a);
	getch();
}