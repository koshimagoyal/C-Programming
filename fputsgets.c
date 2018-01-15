#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str[100],s;
	fp=fopen("general.txt","w");
	fflush(stdin);
	while((scanf("%s",str))!=EOF)
		fputs(str,fp);
	fclose(fp);
	fp=fopen("general.txt","r");
	while(fgets(str,100,fp)!=NULL)
		printf("%s",str);
	fclose(fp);
}
