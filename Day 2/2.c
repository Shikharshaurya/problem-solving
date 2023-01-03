#include<stdio.h>
int main()
{
  int i,n,j,k=1,p;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    for(p=i;p<=n-1;p++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d ", k++);
    }
      k=i+1;
      printf("\n");
  }
}
