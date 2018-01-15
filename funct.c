#include<stdio.h>
void base(int a[],int size)
{
	printf("\n without pointer a=%d",a[0]);
}
void base1(int *p,int size)
{
		printf("\n with pointer %d",*p);
}
void main()
{
	int a[5]={1,2,3,4,5};
	printf("\n main a=%d",a[0]);
	base(a,5);
	base1(&a[0],5);
}
