#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,w,sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
       w=i*(i+1)*(i+2);
       sum=sum+w;
    }
    printf("%d", sum);
}