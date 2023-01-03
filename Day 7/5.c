#include<stdio.h>
int main()
{
    int i;
    char str[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
        else if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        else if(str[i]==32)
        str[i]=str[i];
    }
    puts(str);
}