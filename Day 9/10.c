#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,c;
    printf("Enter n");
    scanf("%d", &n);
    k=0;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
        }
    }
    printf("%d", k);
}