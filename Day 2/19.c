#include <stdio.h>
int main()
{
    int i,j,k,n,z;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<(n-i);k++)
        {
            printf(" ");
        }
        z=1;
        printf("%d ",z);
        for(j=0;j<i;j++)
        {
            z=(z*(i-j))/(j+1);
            printf("%d ",z);
        }
        printf("\n");
    }
    return 0;
}