#include<stdio.h>
void main()
{
    int i,n,b,j,c;
    printf("Enter any number\n");
    scanf("%d" ,&n);
    for(i=2;i<=n;i++)
    {
      b=n%i;
      if(b==0)
      {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        printf("%d ", i);
      }    
    }
}    
    
