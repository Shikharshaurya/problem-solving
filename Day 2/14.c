// Sample Input
// 5
// Sample Output
// *****
//    *
//   *
//  *
// *****

#include<stdio.h>
int main()
{
    int i,j,n,z,o=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        z=i+n-1;
        for(j=1;j<=z-i+1;j++)
        {
            if(i==1 || i==n)
            printf("*");
            else if((i+j)==(n+1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    
    }
}