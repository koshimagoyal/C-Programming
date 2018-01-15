#include<stdio.h>
void main()
{
	FILE *fp;
	char str[100],fname[10];
	int i;
	printf("\n enter the file name");
	scanf("%s",fname);
	fp=fopen(fname,"wb");
	printf("\n enter the contents of file");
	while(!feof(stdin))
	{
		gets(str);
		fwrite(str,1,strlen(str),fp);
	}
	fclose(fp);
	fp=fopen(fname,"rb");
	printf("\n reading contents of file");
	while(!feof(fp))
	{
		fread(str,strlen(str),1,fp);
		puts(str);
	}
	fclose(fp);
}
