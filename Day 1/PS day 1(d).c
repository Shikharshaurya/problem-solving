#include<stdio.h>
void main()
{
    int y;
    printf("Enter any Year\n");
    scanf("%d", &y);
    switch(y%4==0 && y%100!=0 || y%400==0)
    {
        case 1: printf("Entered year is a leap year");
        break;
        default: printf("Entered year is not a leap year");
    }
    return 0;
}
