#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str[100];
	fp=fopen("general.txt","w");
	printf("\n write into file");
	while((scanf("%s",&str))!=EOF)
		fprintf(fp,"%s",str);
	fclose(fp);
	fp=fopen("general.txt","r");
	fflush(stdin);
	while((fscanf(fp,"%s",str))!=EOF)
	{
		printf("%s",str);
	}	
	fclose(fp);
}
