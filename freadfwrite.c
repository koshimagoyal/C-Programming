#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str[100];
	fp=fopen("general.txt","w");
	fflush(stdin);
	while(scanf("%s",str)!=EOF)
		fwrite(str,strlen(str),1,fp);
	fclose(fp);
	fp=fopen("general.txt","r");
	fflush(stdin);
	while(fread(&str,sizeof(char),1,fp))
		printf("%s",str);
	fclose(fp);
}
