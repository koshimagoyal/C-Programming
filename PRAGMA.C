#include<stdio.h>
#include<conio.h>
void School();
void College() ;
#pragma startup School 105
#pragma startup College
#pragma exit College
#pragma exit School 105
void main()
{
clrscr();
printf("\nI am in main");
getch();
}
void School()
{
printf("\nI am in School");
}
void College()
{
printf("\nI am in College");
}
