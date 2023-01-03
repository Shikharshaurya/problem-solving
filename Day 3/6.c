// 1- x2/2! + x4/4! - x6/6!........
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k=1,n,fact,o=2;
    float sum=1,q,x;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value mf x\n");
    scanf("%f", &x);
    for(i=2;i<=2*n-2;i+=2)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        q=pow(x,o)/fact; 
        sum=sum+(pow(-1,k)*q);
        k++;
        o+=2;
    }
    printf("%f", sum);   
}

