#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,j,k,l,t;
	printf("\n enter the number");
	scanf("%d",&no);
	t=no;
	for(i=1;i<=no;i++)
	{
		for(k=1;k<=i;k++)
			printf(" ");
		for(j=1;j<=t;j++)
			printf("%d",j);
		for(l=j-2;l>=1;l--)
			printf("%d",l);
		t--;
		printf("\n");
	}
	for(i=1;i<=no;i++)
	{
		for(k=i;k<=no;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(l=j-2;l>=1;l--)
			printf("%d",l);
		printf("\n");
	}
	getch();
}