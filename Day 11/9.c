#include<stdio.h>
int main()
{
    int n,i,j,x[11],y[11],o;
    float slope;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d", &x[i],&y[i]);
    }

    if(x[1]==x[2]==x[3]==x[4]==x[5]==x[6]==x[7]==x[8]==x[9]==x[10])
    printf("YES");
    else
    {
    slope=(y[1]-y[0])/(x[1]-x[0]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((float)(y[j]-y[i])/(x[j]-x[i])==slope)
            o=0;
            else
            o=1;
        }
    }
    if(o==0)
    printf("YES");
    else
    printf("NO");
    }
}