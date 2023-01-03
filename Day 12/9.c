#include<stdio.h>
int main()
{
    int n,a[100000],i,j,x,t,y;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                t=i;
                y=j;
            }   
        }
    }
    printf("%d %d", t,y);

}