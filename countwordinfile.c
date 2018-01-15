#include<stdio.h>
void main()
{
	FILE *fp;
	char str[50],fname[10],c[50];
	int i;
	printf("\n enter file name");
	scanf("%s",fname);
	fp=fopen(fname,"w");
	printf("\n enter contents in file");
	while(!feof(stdin))
		fputc(getchar(),fp);
	fclose(fp);
	fp=fopen(fname,"r");
	printf("\n read file contents");
	while(!feof(fp))
	{
		int count=0;
		
		printf("%s",c);
	}
	fclose(fp);
}
