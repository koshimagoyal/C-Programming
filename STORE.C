#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c[10],i[10],p[10][10],j,k,f,sum=0;
	clrscr();
	scanf("%d",&n);   //no of cases
	for(j=1;j<=n;j++)
	{
		//printf("\n enter the amount of credit");
		scanf("%d",&c[j]);
		if(c<5||c>1000)
		{
			printf("out of limit");
			scanf("%d",&c[j]);
		}
		//printf("\n enter the no of items");
		scanf("%d",&i[j]);
		 if(n=10)
		 {
			if(i<3||i>100)
			{
				printf("out of limit");
				scanf("%d",&i[j]);
			}
		 }
		 else if(n=50)
		 {
			if(i<3||i>2000)
			{
				printf("out of limit");
				scanf("%d",&i[j]);
			}
		 }
		//printf("\n enter the price of items");
		for(k=1;k<=i[j];k++)
		{
			scanf("%d",&p[j][k]);
			if(p[j][k]>2000)
			{
				printf("out of limit");
				scanf("%d",&p[j][k]);
			}
		}
	}
	for(j=1;j<=n;j++)
	{
	       //	printf("\n credit = %d \n",c[j]);
		//printf("\n items=%d\n",i[j]);
	       //	printf("\n price = ");
		for(k=1;k<=i[j];k++)
		{
			//printf("\t %d",p[j][k]);
			for(f=1;f<=k;f++)
			{
			if(f!=k)
			{
			sum=p[j][f]+p[j][k];
			if(sum==c[j])
			{
				printf("\n Case #%d: %d %d",j,f,k);
				break;
			}
			}
			else
				break;
			}
		}
	}
	getch();
}