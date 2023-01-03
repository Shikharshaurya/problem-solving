// For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N = 4.

#include<stdio.h>
int main()
{
    int i,j,k,n,o;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        o=i-1;
        for(k=1;k<=i-1;k++)
        {
            if(i==1)
            break;
            else if(k>=1)
            printf("%d", o);
            o--;
        }
        printf(" ");

    }
}