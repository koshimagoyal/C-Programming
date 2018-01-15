#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int ch;
	char filename[20];
	printf("\n enter the filename");
	scanf("%s",filename);
	fp=fopen(filename,"w");
	fprintf(fp,"hy how r u");
	fclose(fp);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\n error opening the file");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
