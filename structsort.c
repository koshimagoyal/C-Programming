#include<stdio.h>
struct book
{
	char title[50];
	int page;
	float cost;
};
void main()
{
	int i,j;
	struct book b,*p;
	p=&b;
	printf("\n enter the book title");
	gets((p+i)->title);
	fflush(stdin);
	printf("\n enter the page");
	scanf("%d",&(p+i)->page);
	fflush(stdin);
	printf("\n enter the cost");
	scanf("%f",&(p+i)->cost);
	fflush(stdin);
	printf("\n enter the book title = %s",(p+i)->title);
	fflush(stdin);
	printf("\n enter the page = %d",(p+i)->page);
	fflush(stdin);
	printf("\n enter the cost = %.2f",(p+i)->cost);
	
}
