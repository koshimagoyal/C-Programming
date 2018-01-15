#include<stdio.h>
#include<conio.h>
void main()
{
	float n;
	int a;
	printf("\n enter the number");
	scanf("%f",&n);
	a=(int)n;
	count=0;
	for(i=0;n>0;i++)
	{
		k=n%b;
		n=n/b;
		if(k>9)
			a[i]=55+k;
		else
			a[i]=k;
		count++;

	}
	 fflush(stdin);
	 for(i=count-1;i>=0;i--)
			{
				if(a[i]>9)
					printf("%c",a[i]);
				else
					printf("%d",a[i]);
			}
	getch();
}
