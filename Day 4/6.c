#include<stdio.h>
#include<math.h>
int armstrong(int num)
{
    int i,arm,a,c,g,n;
    for(i=1;i<=num;i++)
    {
    c=0;
    g=i;
    while(g>0)
    {
    g=g/10;
    c++;
    }
    n=i;
    arm=0;
    while(n>0)
    {
    a=n%10;
    n=n/10;
    arm=arm+pow(a,c);
    }
    if(arm==i)
    printf("%d\n", arm);
    }
}
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    armstrong(num);
}
