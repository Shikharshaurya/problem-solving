#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x>0 && y>0)
    printf("1st quadant");
    else if(x>0 && y<0)
    printf("4st quadant");
    else if(x<0 && y>0)
    printf("2st quadant");
    else if(x<0 && y<0)
    printf("3st quadant");
    else if(x=0)
    printf("y axis");
    else if(y=0)
    printf("x axis");
}