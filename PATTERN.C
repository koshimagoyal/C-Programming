#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k,t;
	printf("\n enter the number till you want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	t=n;
	for(k=1;k<n;k++)
	{
		for(j=1;j<t;j++)
			printf("%d",j);
		t--;
		printf("\n");
	}
	getch();
}