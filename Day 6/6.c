#include<stdio.h>
#include<string.h>
int main()
{
  int n,m,j,k,l;
  char i,str1[100];
  char str2[200],a[100],b[100];
	scanf("%s", str1);
    scanf("%s", str2);
    n=0;m=0;
    for(i='a';i<'z';i++)
    {
        for(j=0;j<strlen(str1);j++)
        {
            if(str1[j]==i)
            {
                a[n]=str1[j];
                n++;
            }
        }
    }
    for(i='a';i<'z';i++)
    {
        for(l=0;l<strlen(str2);l++)
        {
            if(str2[l]==i)
            {
                b[m]=str2[l];
                m++;
            }
        }
    }

    for(j=0;j<strlen(str1);j++)
    {
        printf("%c", a[j]);
    }
    printf(" ");
     for(l=0;l<strlen(str2);l++)
    {
        printf("%c", b[l]);
    }
    printf(" ");

    printf("%d", strcmp(a,b));
}