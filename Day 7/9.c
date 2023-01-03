#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,b;
    gets(str);
    int c=0;
    int length=strlen(str)-1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            b=i;
            c++;
        }
    }
    if(c>=1)
    {
        for(k=b+1;k<length+1;k++)
        {
            printf("%c", str[k]);
        }
    }
    else
    {
        printf("%c",str[length]);
    }
}
