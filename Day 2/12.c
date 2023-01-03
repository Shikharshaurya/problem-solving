#include<stdio.h>
int main()
{
    int i,j,k,n,a=-2;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=i;j<=n;j++)
        {
            printf("%d", k);
            k++;
        }
        a--;
        for(k=i;k<2*i+a-1;k++)
        {
            if(k==1)
            continue;
            else if(k>2)
            printf(" ");
            else
            printf(" ");
        }

        for(j=n-i;j>=0;j--)
        {
            if(j==n-1)
            continue;
            printf("%d", j+1);
        }
        printf("\n");
    }

}