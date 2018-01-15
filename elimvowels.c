#include<stdio.h>
void main()
{
	int t,n,i,j;
	char a[100],b[100];
	scanf("%d",&t);
	fflush(stdin);
	while(t--)
	{
		gets(a);
		n=strlen(a);
		j=0;
		for(i=0;i<n;)
		{
			if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
				i++;
			else
			{
				b[j]=a[i];
				i++;
				j++;
			}
		}
		b[j]='\0';
		puts(b);
	}
}
