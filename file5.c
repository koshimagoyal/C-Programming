#include<stdio.h>
void main()
{
	FILE *fp;
	char name[20];
	int roll;
	fp=fopen("student.txt","w");
	printf("\n enter name and roll no");
	scanf("%s %d",name,&roll);
	printf("?");
	while(!(feof(stdin)))
	{
		fprintf(fp,"\n Name = %s \t Roll No = %d",name,roll);
		printf("?");
		scanf("%s %d",name,&roll);
	}
	fclose(fp);
}
