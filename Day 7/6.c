#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,c,x,y;
    printf("Enter String one\n");
    gets(a);
    printf("Enter String two\n");
    gets(b);
    c=0;

    for(x=0;a[x]!='\0';x++)
    {}

    for(y=0;b[y]!='\0';y++)
    {}

    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            c=1;
            break;
        }
        i++;
    }
    if(c==0 && x==y)
    printf("Both are Same");
    else
    printf("Unequal");
}