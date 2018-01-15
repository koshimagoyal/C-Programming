#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count=0,n,m,j;
	printf("\n enter the range");
	scanf("%d %d",&n,&m);
	printf("\n prime numbers are");
	for(i=n;i<=m;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("\n %d",i);
	}
	getch();
}
