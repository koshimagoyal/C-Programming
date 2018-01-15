#include<stdio.h>
void School();
void College() ;

#pragma startup School 105
#pragma startup College
#pragma exit College
#pragma exit School 105

void main(){
printf("\nI am in main");
}

void School(){
printf("\nI am in School");
}

void College(){
printf("\nI am in College");

}
