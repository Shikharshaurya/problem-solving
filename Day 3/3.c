#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,fact,w=1;
    float sum=1.000,q,x;
    scanf("%d", &n);
    printf("Enter the value mf x");
    scanf("%f", &x);
    for(i=1;i<n;i++)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        q=pow(x,w)/fact;
        sum=sum+q;
        w++;
    }
    printf("%f", sum);   
}