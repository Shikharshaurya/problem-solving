#include<stdio.h>
#include<math.h>
int main()
{
    float n,m;
    int a,b;
    printf("Enter n");
    scanf("%f", &n);
    printf("Enter m");
    scanf("%f", &m);
    a=ceil(m/2);
    b=ceil(n/2);
    printf("%d", a*b);

}