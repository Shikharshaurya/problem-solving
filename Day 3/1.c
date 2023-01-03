#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,fact,sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d", sum);   
}