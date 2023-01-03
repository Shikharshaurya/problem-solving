#include<stdio.h>
int main()
{
    long int c,r,ele;
    scanf("%ld%ld", &r,&c);
    if(r%2==0)
    {
        ele=1+10*((r-1)/2)+2*(c-1);
        printf("%ld", ele);
    }
    else if(r%2!=0)
    {
        ele=10*(r/2)+2*(c-1);
        printf("%ld", ele);
    }
}