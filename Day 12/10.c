#include<stdio.h>
int main()
{
    int n,a[100000],i,j,x,t,y,g;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t=j;
                g=1;
            }
            else
            g=0;   
        }
    }
    if(g==1)
    printf("%d %d", t,a[t]);
    else
    printf("-1");
}