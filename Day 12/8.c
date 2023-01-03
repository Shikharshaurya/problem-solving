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
        if(a[i]==x)
        {
            t=i;
            break;
        }
    }
     for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            y=i;
        }
    }
    printf("%d %d", t,y);

}