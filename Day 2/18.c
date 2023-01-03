// Input:
// S = Geeks
// Output:
// Geeks
// .eeks
// ..eks
// ...ks
// ....s

#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k,a;
    char str[10];
    scanf("%s", str);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
      if(i==0)
      printf("%s", str);
      for(j=0;j<=i-1;j++)
      {
        printf(".");
      }
      for(j=i;j<a;j++)
      {
        if(i==0)
        continue;
        else if(i>0)
        printf("%c", str[j]);
      }
    printf("\n");
    }


}
