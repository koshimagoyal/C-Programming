#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char input[50];
	int n,i,j,count,start,end,len;
	char c;
	scanf("%d",&n);
	while((c=getchar())!='\n'&&c!=EOF)
	{ }
	for(count=0;count<n;count++)
	{
		scanf("%100[\n]",input);
		getchar();
		printf("Case #%d: ",count+1);
		len=strlen(input);
		end=len;
		for(i=len-1;i>=0;i--)
		{
			if(input[i]==' ')
			{
				start = i+1;
				for(j=start;j<end;j++)
					printf("%c",input[j]);
				end=start-1;
				printf(" ");
			}
		}
		for(i=0;i<end;i++)
			printf("%c",input[i]);
		printf("\n");
	}
	getch();
}