#include<stdio.h>
#include<stdarg.h>
float func(int n,...)
{
	va_list valist;
	int sum=0;
	int i;
	va_start(valist,n);
	printf("\n n=%d",n);
	for(i=0;i<n;i++)
	{
		sum+=va_arg(valist,int);
	}
	printf("\nsum=%d",sum);
	va_end(valist);
	return sum/n;
}
void main()
{
	printf("\n Average=%f",func(4,2,3,4,5));
	printf("\n Average=%f",func(34,23,87,12,99));
}
