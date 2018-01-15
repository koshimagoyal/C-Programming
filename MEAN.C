#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n;
	float a[15],mean,var,sum=0.0,sd;
	clrscr();
	printf("\n enter the no of values you want to enter");
	scanf("%d",&n);
	printf("\n enter the values");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	mean=sum/n;
	for(i=0;i<n;i++)
		sum+=(mean-a[i]);
	var=(sum*sum)/n;
	sd=sqrt(var);
	printf("\n Mean = %0.3f",mean);
	printf("\n Variance = %0.3f",var);
	printf("\n Standard deviaation = %0.3f",sd);
	getch();
}