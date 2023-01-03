#include<stdio.h>
int main()
{
    int n,i,s,k,j;
    printf("Enter n\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n-1;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

}