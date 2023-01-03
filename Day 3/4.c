#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,fact,e=1;
    float sum=1.000,q,x;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value mf x\n");
    scanf("%f", &x);
    for(i=1;i<n;i++)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        q=pow(-x,e)/fact;
        sum=sum+q;
        e++;
    }
    printf("%f", sum);   
}

