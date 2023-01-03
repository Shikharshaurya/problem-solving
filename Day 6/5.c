// Matrix Rotation at 180 Degrees clockwise
#include<stdio.h>
int main()
{
    int a[100][100],n,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d ", a[n-n][j]);
    }

    for(i=1;i<n;i++)
    {
        printf("%d ", a[i][n-1]);
    }

    for(j=n-2;j>=0;j--)
    {
        printf("%d ", a[n-1][j]);
    }
    if(n>=3)
    {
    for(j=0;j<=n-2;j++)
    {
        printf("%d ", a[n-2][j]);
    }
    }
}
