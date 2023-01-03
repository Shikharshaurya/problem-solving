// Matrix rotation clockwise  at 90 degrees
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
    printf("Rotated Matrix by 90 degres clockwise\n");

    for(j=0;j<n;j++)
    {
        for(i=n-1;i>=0;i--)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
}