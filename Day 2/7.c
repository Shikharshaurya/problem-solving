// Pattern for N = 4
//     1
//    212
//   32123
//  4321234
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
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d", k--);
        }
        k=k+2;
        for(j=1;j<i;j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }

}