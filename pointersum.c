#include<stdio.h>
void main()
{
	int *p,a[5],i,sum=0;
	printf("\n enter array elements");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	p=&a[0];
	for(i=0;i<5;i++)
		sum+=*(p+i);
	printf("\n sum=%d",sum);
}
