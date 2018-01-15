#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
	int k,rev=0,s,p,n;
	printf("\n enter the number");
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		k=n%10;
		rev=rev+k*k*k;
		n=n/10;
	}
	if(rev==s)
		printf("\n %d is armstrong",s);
	else
		printf("\n %d is not armstrong",s);
	getch();
}