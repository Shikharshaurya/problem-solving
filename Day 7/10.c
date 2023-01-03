#include<stdio.h>
#include<string.h>
int main()
{
    char i,str[100];
    int j,k,c;
    gets(str);
    for(i='a';i<'z';i++)
    {
        c=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]==i)
            {
                c++;
            }
        }
        printf("%c = %d", i,c);
        printf("\n");
    }
}