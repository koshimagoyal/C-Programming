#include<stdio.h>
void main()
{
	int a[10],i,j,no,k,t,flag=0,count=0,s;
	printf("\n enter the number");
	scanf("%d",&no);
	k=0;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)	
		{
			a[k]=i;
			k++;
		}
	}	
	for(i=1;i<=k;i++)
	{
		for(j=i;j<=k;j++)
		{
			if(a[i]*a[j]==no)
			{
				for(t=2;t<=k;t++)
				{
					if(a[i]==t*t)
					{
						for(s=2;s<=k;s++)
						{
							if(a[j]==s*s)
							{
								printf("\n%d*%d*%d*%d",t,t,s,s);
								flag=1;
								count++;
							}
						}
						if(flag!=1)
						{
							printf("\n%d*%d",t,t);
							count++;
						}
						count++;
					}
					else if(a[j]==t*t)
					{
						
						if(flag!=1)
						{
							printf("\n%d*%d",t,t);
							count++;
						}
					}
				}
			}
		}
	}
}
