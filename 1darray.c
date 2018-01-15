#include<stdio.h>
void func(int *p,int n)
{
	int i;
	printf("\n Array elements");
	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
}
void main()
{
	int a[10],n,i;
	printf("\n enter the size");
	scanf("%d",&n);
	printf("\n enter elements of array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	func(a,n);
}
