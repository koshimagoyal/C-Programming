#include<stdio.h>
struct book
{
	char title[50];
	int page;
	float cost;
};
void main()
{
	int n,i;
	printf("\n enter the no of books you want to enter");
	scanf("%d",&n);
	struct book *b=(struct book *)malloc(n*sizeof(struct book));
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n enter the book title");
		gets(b[i].title);
		fflush(stdin);
		printf("\n enter the page");
		scanf("%d",&b[i].page);
		fflush(stdin);
		printf("\n enter the cost");
		scanf("%f",&b[i].cost);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Book Name = %s",b[i].title);
		printf("\n Book Pages = %d",b[i].page);
		printf("\n Book Cost = %.2f",b[i].cost);
	}
}
