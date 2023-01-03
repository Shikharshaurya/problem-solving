#include<stdio.h>
int main()
{
    int n,i,j,l,b,k,m;
    scanf("%d", &n);
    while(n>0)
    {
        scanf("%d%d", &l,&b);
        if(l==b)
        printf("%d\n", 1);
        else if(l!=b)
        {
            j=l*b;
            if(l<b)
            m=l;
            else if(l>b)
            m=b;
            for(i=1;i<=m;i++)
            {
                if(l%i==0 && b%i==0)
                {
                    k=i;
                }
            }
            printf("%d\n", j/(k*k));
        }
    n--;
    }
}