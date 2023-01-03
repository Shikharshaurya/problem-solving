#include<stdio.h>
int perfect(int n)
{
    int j,s,i;
    for(i=1;i<=n;i++)
    {
        s=0;
     for(j=1;j<i;j++)
     {
        if((i%j)==0)
          s=s+j;
     }
     if(s==i)
       printf("%d ", s);
    }
}    
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d", &n);
    perfect(n);
   
}

    