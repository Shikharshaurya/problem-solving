#include<stdio.h>
int main()
{
    int i,j,k,n,s;
    printf("Enter n\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n-1;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for(i=n-1;i>=1;i--)
    {
        for(s=i;s<=n-1;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    } 
}

