#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	int *p,n,i,flag,j;
	clrscr();
	printf("\n enter the size of array");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n Array elements");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(*(p+i)>*(p+j))
				flag++;
			else
				continue;
		}
		if(flag==n-1)
			printf("\n Greatest number is %d",*(p+i));
	}
	getch();
}