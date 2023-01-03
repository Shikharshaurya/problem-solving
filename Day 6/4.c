// Matrix Rotation at 180 Degrees clockwise
#include<stdio.h>
int main()
{
    int a[100][100],i,j,k,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("Rotated Matrix by 180 degres clockwise\n");

    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
}