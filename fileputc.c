#include<stdio.h>
void main()
{
	FILE *fp;
	char str[50],fnam[10],c;
	printf("\n enter the filename");
	scanf("%s",fnam);
	fp=fopen(fnam,"w");
	printf("\n enter the contents of file");
	while(!feof(stdin))
	{
		fputc(getchar(),fp);
	}
	fclose(fp);
	fp=fopen(fnam,"r");
	printf("\n read the contents of file");
	while(!feof(fp))
	{
		printf("%c",fgetc(fp));
	}
	fclose(fp);
}
