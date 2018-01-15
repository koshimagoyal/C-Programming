#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<malloc.h>
void main()
{
	int ch,n,k,b,count=0,i,sum,l,val,b1;
	char a[50],*p,ans;
	clrscr();
	do
	{
	printf("\n Conversions");
	printf("\n 1. Any Base to Decimal");
	printf("\n 2. Decimal to Any Base");
	printf("\n 3. Any Base to Other Base");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\n enter the number you want to convert to decimal");
			fflush(stdin);
			gets(a);
			printf("\n enter the base in which you have your number");
			scanf("%d",&b);
			l=strlen(a);
			l--;
			sum=0;
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]>='0'&&a[i]<='9')
					val=a[i]-48;
				else if(a[i]>='a'&&a[i]<='z')
					val=a[i]-97+10;
				else if(a[i]>='A'&&a[i]<='Z')
					val=a[i]-65+10;
				sum+=val*pow(b,l);
				l--;

			}
			fflush(stdin);
			printf("%d",sum);
			break;
		case 2: printf("\n enter the number in decimal");
			scanf("%d",&n);
			printf("\n enter the base you want to enter");
			fflush(stdin);
			scanf("%d",&b);
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
			break;
		case 3: printf("\n enter the number you want to convert");
			fflush(stdin);
			gets(a);
			printf("\n enter the base in which you have your number");
			scanf("%d",&b);
			printf("\n enter the base in which you want to connvert");
			scanf("%d",&b1);
			fflush(stdin);
			l=strlen(a);
			l--;
			sum=0;
			count=0;
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]>='0'&&a[i]<='9')
					val=a[i]-48;
				else if(a[i]>='a'&&a[i]<='z')
					val=a[i]-97+10;
				else if(a[i]>='A'&&a[i]<='Z')
					val=a[i]-65+10;
				sum+=val*pow(b,l);
				l--;

			}
			for(i=0;sum>0;i++)
			{
				k=sum%b1;
				sum=sum/b1;
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
			break;
		default: printf("\n wrong input");
	}
	printf("\n do you want to continue, press y or n ? ");
	fflush(stdin);
	scanf("%c",&ans);
	}while(ans=='y'||ans=='Y');
	getch();
}