#include<stdio.h>
int main()
{
    int n,k,a[100],i,j,c;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if((a[i]-a[i+1]==1 || a[i+1]-a[i]==1) && a[i]<k)
        {
         printf("%d %d ", a[i], a[i+1]);
         c=0;
        }
    }
    
}