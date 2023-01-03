#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,c,x,y,o;
    printf("Enter String one\n");
    gets(a);
    printf("Enter String two\n");
    gets(b);
    for(x=0;a[x]!='\0';x++)
    {}

    for(y=0;b[y]!='\0';y++)
    {}
    o=0;
    for(i=x;i<x+y;i++)
    {
        a[i]=b[o];
        o++;
    }
    printf("Concatenated String\n");
    puts(a);
}