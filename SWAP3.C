#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q,c;
	printf("\n enter the two numbers");
	scanf("%d %d",&a,&b);
	printf("\n Before swapping a=%d and b=%d",a,b);
	p=&a;
	q=&b;
	c=*p;
	*p=*q;
	*q=c;
	printf("\n After swapping a=%d and b=%d",a,b);
	getch();
}