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
	struct book b[10],*p;
	p=&b[0];
	for(i=0;i<10;i++)
	{
		printf("\n enter the book title");
		gets((p+i)->title);
		fflush(stdin);
		printf("\n enter the page");
		scanf("%d",&(p+i)->page);
		fflush(stdin);
		printf("\n enter the cost");
		scanf("%f",&(p+i)->cost);
		fflush(stdin);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if((p+j)->cost>(p+(j+1))->cost)
			{
				struct book temp;
				temp=*(p+j);
				*(p+j)=*(p+(j+1));
				*(p+(j+1))=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\n enter the book title = %s",(p+i)->title);
		fflush(stdin);
		printf("\n enter the page = %d",(p+i)->page);
		fflush(stdin);
		printf("\n enter the cost = %.2f",(p+i)->cost);
	}
}
