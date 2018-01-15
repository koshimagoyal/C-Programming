#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,n,j,count,a[10],s;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	printf("\n all the prime factors of %d are",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==2)
				printf("\t %d",i);

		}
	}
	getch();
}