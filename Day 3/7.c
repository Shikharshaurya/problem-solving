// Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k=0,n,fact;
    float sum=0,q,x=1;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for(i=1;i<=2*n-1;i+=2)
    {
        fact=1;
        for(j=i;j>=1;j--)
        {
            fact=fact*j;
        }
        q=x/fact; 
        sum=sum+(pow(-1,k)*q);
        x++;
        k++;
    }
    printf("%f", sum);   
}

