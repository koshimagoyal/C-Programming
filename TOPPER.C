#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,i,j,k,l,count;
	int m[10][10],sum,p[10],temp;
	clrscr();
	printf("\n enter the no of students");
	scanf("%d",&n);
	printf("\n enter the subjects in the semester");
	scanf("%d",&s);
	for(j=1;j<=n;j++)
	{
		printf("\n enter the marks of %d student in semester",j);
		for(i=1;i<=s;i++)
			scanf("%d",&m[j][i]);
	}
	for(j=1;j<=n;j++)
	{
		sum=0;
		printf("\n Marks and sum of roll no=%d is",j);
		for(i=1;i<=s;i++)
		{
			printf(" %d ",m[j][i]);
			sum=sum+m[j][i];
		}
		printf("\t sum=%d",sum);
		p[j]=(sum/s);
		printf("\t percentage = %d %",p[j]);
		printf("\n");
	}
	for(k=1;k<=n;k++)
	{
		count=0;
		for(l=1;l<=n;l++)
		{
			if(p[k]>p[l])
				count++;
			else
				continue;
		}
		if(count==n-1)
			printf("\n topper of the batch is roll no = %d with percentage = %d %",k,p[k]);
	}
	getch();
}