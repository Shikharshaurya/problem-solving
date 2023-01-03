#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first side of a triangle\n");
    scanf("%d", &a);
    printf("Enter the second side of a triangle\n");
    scanf("%d", &b);
    printf("Enter the third side of a triangle\n");
    scanf("%d", &c);
    if(a==b && b==c)
    {
        printf("It is an Equilateral Triangle\n");
    }
    else if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
    {
        printf("It is an Isosceles Triangle\n");
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
    {
        printf("It is a  Right angled Triangle\n");
    }
    else
    {
        printf("It is a scalene Triangle\n");
    }
    
    return 0;
}