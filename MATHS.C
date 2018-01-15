#include<math.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
int sevenInHeaven(int input1_size,int*input1)
{
	return input1_size;
}
void main()
{
	int output=0;
	int ip1_size=0;
	int ip1_i;
	scanf("%d\n",&ip1_size);
	int ip1[ip1_size];
	for(ip1_i = 0; ip1_i<ip1_size;ip1_i++)
	{
		int ip1_item;
		scanf("%d",&ip1_item);
		ip1[ip1_i]=ip1_item;
	}
	output=sevenInHeaven(ip1_size,ip1);
	printf("%d\n",output);
	getch();
}
