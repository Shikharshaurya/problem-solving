#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,c=0;
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        c++;
        i++;
    }
    printf("%d", c+1);
}