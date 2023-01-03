#include<stdio.h>
int main()
{
    float x1,y1,c,d,x2,y2,t,i,j,k,a,b,count=0;
    float m;
    scanf("%f", &t);
    while(t>0)
    {
        scanf("%f%f%f%f", &x1,&y1,&x2,&y2);
        m=(y2-y1)/(x2-x1);
        a=y1>y2?y1:y2;
        c=y1<y2?y1:y2;
        b=x1>x2?x1:x2;
        d=x1<x2?x1:x2;
        count=0;
        for(i=c+1;i<a;i++)
        {
            for(j=d+1;j<b;j++)
            {
                if((i-(m*j))==(y1-(m*x1)))
                count++;
            }   
        }
        printf("%.0f\n", count);
        t--;
    }
}