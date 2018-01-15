#include<stdio.h>
void main()
{
	FILE *fp;
	char str[50],fnam[10];
	int c;
	printf("\n enter the filename");
	scanf("%s",fnam);
	fp=fopen(fnam,"w");
	printf("\n enter the contents of file");
	while(!feof(stdin))
	{
		gets(str);
		fputs(str,fp);
	}
	fclose(fp);
	fp=fopen(fnam,"r");
	printf("\n read the contents of file");
	while(!feof(fp))
	{
		fgets(str,50,fp);
		puts(str);
	}
	fclose(fp);
}
