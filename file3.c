#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	int line=1,i=0;
	char text[50],ch;
	if(argc!=2)
	{
		printf("\n full info is not provided");
		exit(0);
	}
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("\n error in opening");
		return 0;
	}
	i=0;
	while(feof(fp)==0)
	{
		fscanf(fp,"%c",&ch);
		if(ch=='\n')
		{
			line++;
			text[i]='\0';
			printf("%d %s",line,text);
			i=0;
		}
		text[i]=ch;
		i++;
	}
	text[i]='\0';
	printf("%s",text);
	fclose(fp);
	return 0;
}
