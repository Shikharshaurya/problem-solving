#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,fact,count;
    printf("Enter the value of n");
    scanf("%d", &n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    j=fact;
    count=0;
    while(j>0)
    {
        k=j%10;
        j=j/10;
        if(k==0)
        count++;
    }

    printf("%d", count);
}