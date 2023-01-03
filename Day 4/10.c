#include<stdio.h>
#include<math.h>
int power(int a, int b)
{
    if(b==0)
    return 1;
    else
    return (a*pow(a,b-1));
}
int main()
{
    int a,b,g;
    printf("Enter the base number\n");
    scanf("%d", &a);
    printf("Enter the power\n");
    scanf("%d", &b);
    g=power(a,b);
    printf("%d", g);

}