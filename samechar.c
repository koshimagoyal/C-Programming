#include<stdio.h>
void main()
{
	int t,n,i,count,l,p;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		count=0;
		p=0;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]==a[i+1])
				count++;
		}
		if(count==(l-1))
			printf("Yes");
		else
			printf("No");
		if(p<t)
			printf("\n");
	}
}
