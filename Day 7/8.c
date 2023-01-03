#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k;
    gets(str);
    int c=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            c++;
            break;
        }
    }
    if(c>=1)
    {
        for(k=0;k<i;k++)
        {
            printf("%c", str[k]);
        }
    }
    else
    {
        for(i=0;i<strlen(str);i++)
        {
        for(j=0;j<=i;j++)
        {
            printf("%c", str[j]);
        }
        printf(" ");
        }
    }
}