#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,t,c;
    scanf("%d", &n);
    i=n;
    c=0;
    while(i>0)
    {
        if(i%2==0)
        {
            i=i/2;
            c++;
        }
        else if(i%2!=0)
        {
            i=i-1;
            c++;
        }
    }
    printf("%d", c);
}