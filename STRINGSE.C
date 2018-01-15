#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
char* stringSliced(char*input1,int input2,int input3)
{
	char *p;
	return strncpy(p,input1,input3+1);
	//return p;
}
void main()
{
	char* output;
	char* ip1;
	ip1 = (char *)malloc(512000*sizeof(char));
	scanf("\n%[^\n]",ip1);
	int ip2;
	scanf("%d",&ip2);
	int ip3;
	scanf("%d",&ip3);
	output = stringSliced(ip1,ip2,ip3);
	printf("%s\n",output);
	getch();
}