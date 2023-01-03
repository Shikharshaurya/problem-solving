#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,h;
    scanf("%lf%lf", &b,&a);
    h=ceil((2*a)/b);
    if(h==0)
    printf("1");
    else
    printf("%.0lf", h);
}