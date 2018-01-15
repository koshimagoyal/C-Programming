#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,rev=0,s;
	printf("\n enter the number");
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		k=n%10;
		rev=rev*10+k;
		n=n/10;
	}
	if(rev==s)
		printf("\n %d is pallindrome",s);
	else
		printf("\n %d is not pallindrome",s);
	getch();
}