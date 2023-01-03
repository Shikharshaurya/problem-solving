#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);  
        }
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        j=i;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }

}