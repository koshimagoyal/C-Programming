#include<stdio.h>
void main()
{
	FILE *fp;
	char str[100],fname[10];
	int i;
	printf("\n enter the file name");
	scanf("%s",fname);
	fp=fopen(fname,"rb");
	printf("\n reading contents of file");
		fseek(fp,1,SEEK_CUR);
		fread(str,strlen(str),1,fp);
		puts(str);
	fclose(fp);
}
