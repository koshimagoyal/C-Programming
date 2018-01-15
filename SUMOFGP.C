#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,r,n;
	float sum;
	printf("\n enter the first term of gp");
	scanf("%d",&a);
	printf("\n enter the ratio");
	scanf("%d",&r);
	printf("\n enter the no of terms");
	scanf("%d",&n);
	sum=(a*(1-pow(r,n))/(1-r));
	printf("\n Sum of GP = %0.2f",sum);
	getch();
}