#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str[100],fname[10];
	printf("\n enter the filename");
	scanf("%s",fname);
	printf("\n enter contents of file");
	fp=fopen(fname,"wb");
	fflush(stdin);
	while(scanf("%s",str)!=EOF)
		fwrite(str,strlen(str),1,fp);
	fclose(fp);
	printf("\n reading contents of file\n");
	fp=fopen(fname,"rb");
	fflush(stdin);
	while(fread(&str,sizeof(char),1,fp))
		printf("%s",str);
	fclose(fp);
}
