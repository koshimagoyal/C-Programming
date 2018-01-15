#include<stdio.h>
#include<string.h>
int subStringDetector(char s[],char p[])
{
	int i,j,flag=0,n1,n2;
	n1=strlen(s);
	n2=strlen(p);
	for(i=0;i<=n1-n2;i++)
	{
		for(j=i;j<i+n2;j++)
		{
			flag=1;
			if(s[j]!=p[j])
			{
				printf("\n s=%c \np=%c",s[j],p[j+1]);
				flag=0;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
void main()
{
	char s[100],c[50];
	printf("\n enter the source and sub string");
	gets(s);
	gets(c);
	printf("\n souce string = %s",s);
	printf("\n sub string = %s",c);
	if(subStringDetector(s,c)==1)
		printf("\n yes it is substring of entered string");
	else
		printf("\n no it is not substring of entered string");
}
