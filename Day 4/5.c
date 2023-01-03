#include<stdio.h>  
int prime(int n)
{
  int i,j,c=0;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     {
       if(i%j==0)
         c=c+1;
     }
     if(c==2)
      printf("%d\n",i);
      c=0;
  }
}
int main()
{
  int n;
  printf("Enter the range\n");
  scanf("%d", &n);
  prime(n);
}