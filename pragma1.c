#include<stdio.h>
#pragma startup f1
#pragma exist f2
void main()
{
	printf("\n i am in main");
}
f1()
{
	printf("\n i m in f1");
}
f2()
{
	printf("\n i m in f2");
}

