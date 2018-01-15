#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[50],b[50],c[50],d[50],f[50],m[50];
	int i,s,ch,count,j,k,l,base,n,t,z,in[10];
	double sum=0.0,sum1=0.0;
	float p,h;
	clrscr();
	printf("\n Conversion");
	printf("\n 1. Fractional number of any base to decimal");
	printf("\n 2. Decimal Fraction to any other base");
	printf("\n enter the fraction number");
	gets(a);
	fflush(stdin);
	s=strlen(a);
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: i=0;
		count=0;
		while(a[i]!='.')
		{
			b[i]=a[i];
			i++;
			count++;
		}
		b[i]='\0';
		j=0;
		for(i=count;i<=s;i++)
		{
			if(a[i]=='.')
				continue;
			else
			{
				c[j]=a[i];
				j++;
			}
		}
		c[j]='\0';
		k=strlen(b);
		l=strlen(c);
		printf("\n enter the base in which your number is");
		scanf("%d",&base);
		j=0;
		sum=0.0;
		t=atoi(b);
		while(t>0)
		{
			n=t%10;
			sum+=n*pow(2,j);
			j++;
			t=t/10;
		}
		sum1=0.0;
		z=atoi(c);
		j=-l;
		while(z>0)
		{
			n=z%10;
			sum1+=n*pow(2,j);
			j++;
			z=z/10;
		}
		sum+=sum1;
		printf("\nAny Base=%.2lf",sum);
		break;
	case 2: i=0;
		count=0;
		while(a[i]!='.')
		{
			b[i]=a[i];
			i++;
			count++;
		}
		b[i]='\0';
		j=0;
		for(i=count;i<=s;i++)
		{
			c[j]=a[i];
			j++;
		}
		c[j]='\0';
		k=atoi(b);
		h=atof(c);
		printf("\n enter the base in which you want to convert");
		scanf("%d",&base);
		count=0;
		for(i=0;k>0;i++)
		{
			l=k%base;
			k=k/base;
			if(k>9)
				f[i]=55+l;
			else
				f[i]=l;
			count++;
		}
		for(i=count-1;i>=0;i--)
		{
			if(f[i]>9)
				printf("%c",f[i]);
			else
				printf("%d",f[i]);
		}
		count=0;
		j=0;
		for(i=0;i<3;i++)
		{
			fflush(stdin);
			p=h*2;
			fflush(stdin);
			in[j]=(int)p;
			fflush(stdin);
			h=p-in[j];
			j++;
		}
		printf(".");
		for(i=0;i<j;i++)
			printf("%d",in[i]);
		break;
	default: printf("\n wrong input");
	}
	getch();
}