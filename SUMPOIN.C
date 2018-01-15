#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,*p,i,sum=0;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		p=&a[i];
		sum+=*p;
	}
	printf("\n Sum = %d",sum);
	getch();
}