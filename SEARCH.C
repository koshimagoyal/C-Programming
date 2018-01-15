#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,flag=0;
	clrscr();
	printf("\n enter the 10 elements");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n Array Elements are");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
	printf("\n enter the no you want to search");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			flag=1;
			printf("\n %d is found at position %d",n,i+1);
		}
	}
	if(flag!=1)
		printf("\n %d is not found",n);
	getch();
}