#include<stdio.h>
#include<conio.h>
struct book
{
	char title[50];
	int page;
	float cost;
};
void main()
{
	struct book b;
	printf("\n enter the book title");
	gets(b.title);
	printf("\n enter the page");
	scanf("%d",&b.page);
	printf("\n enter the cost");
	scanf("%f",&b.cost);
	printf("\n Book Name = %s",b.title);
	printf("\n Book Pages = %d",b.page);
	printf("\n Book Cost = %.2f",b.cost);
	getch();
}
