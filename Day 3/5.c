// x- x3/3! + x5/5! - x7/7!........ 
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,fact,f=1,k=2;
    float sum=0,q,x;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value mf x\n");
    scanf("%f", &x);
    for(i=1;i<=2*n-1;i+=2)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        q=pow(x,f)*i/fact; 
        sum=sum+pow(-1,k)*q;
        f+=2;
        k++;
    }
    printf("%f", sum);   
}

