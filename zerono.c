#include<stdio.h>
#include<string.h>
void main()
{
	int t,n,i;
	char a[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		int count=0;
		int l=strlen(a);
		for(i=1;i<l;i++)
		{
			if(a[i]=='0')
				count++;
		}
		if(count<=0||a[0]==0)
			printf("NO");
		else
			printf("YES");
	}
}
