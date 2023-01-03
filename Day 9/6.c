#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,t,c,a,l,r,j;
    scanf("%d%d", &l,&r);
    for(j=l;j<=r;j++)
    {
        i=j;
        c=0;
        while(i>0)
        {
            a=i%10;

            if(a!=0&&(j%a==0) ) 
            {
                c=1;
            }

            else
            {
                c=0;
                break;
            }

            i=i/10;             
        }
        if(c==1)
         printf("%d ", j);
    }
}